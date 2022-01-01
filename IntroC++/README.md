#Pointers 
## pointeurs classqie
* réserver une espace mémoire par malloc/new
* libérer le mémoire  free/delate
* prebleme fuite de mémoire :
<p>il faut mettre Free ou delete mais par fois on a une return avant :(

## Ponteurs intélligents:
### Unique_ptr :
* libération de la mémoire résolu :), par la libération automatique 
* pointe vers une seule ressource. 
    * Pourqui?
pour éviter le double libération free/delate
    * comment?
par mettre le constructeur de compie = delate
    * problème : 
quand on appel à une function, mais la on a deux solution :
1. pointeur de c *: s
    fun(c * v){v->do_sommthing();}
    .....
    void main(){
    std::unique<type> val = std::make_ptr<type>();
    fun(val.get());
    }

2. std::move :
std::vector<unique_ptr<typr>> vec;
fun(std::unique_ptr(type) val){vec.push_back(std::move(val));}
......
    void main(){
        std::unique<type> val = std::make_ptr<type>();
        type *val_ptr=val.get();
        fun(std::move(val));
        val_ptr->do_something()
    }


### shared_ptr :
* libération de la mémoire résolu :), par la libération automatique 
* une seul ressourec possède pluseurs shard_ptr qui le parttagent. 
    * comment ?
par le p.use_count(): pendant la création de shared_ptr count=1 chaque copie count-- et dès que count = 0 on libère la mémoire 

### weak_ptr
partage le resource avec shared_ptr mais pas en tanque owner :)
une conseil d'utiliser weak_ptr quand les attribue de class pointe ou partage une meme source.

* pourquoi?
pour evitet le cercle de libération illimété , par définir une par shared_ptr et l'autre par unique_ptr 


