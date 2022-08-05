#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"
#include "brain.hpp"

//________________________________________________________________________//
//Dog//

Dog::Dog(){
	this->type = "Dog";
	std::cout << "type: " << this->type << " has been constructed" << std::endl;
}

Dog::Dog(Dog const& other){
	this->type = other.type;
	std::cout << "type: " << this->type << " has been constructed" << std::endl;
}

Dog::~Dog(){std::cout << "Animal " << type << "was destroyed." << std::endl;}

Dog &Dog::operator=(Dog const &other)
{this->type = other.type; return *this;}

//________________________________________________________________________//
//Cat//

Cat::Cat(){
	this->type = "Cat";
	std::cout << "type: " << this->type << " has been constructed" << std::endl;
}

Cat::Cat(Cat const& other){
	this->type = other.type;
	std::cout << "type: " << this->type << " has been constructed" << std::endl;
}

Cat::~Cat()
{std::cout << "Animal " << type << "was destroyed." << std::endl;}

Cat &Cat::operator=(Cat const &other)
{this->type = other.type; return *this;}

//________________________________________________________________________//
//Brain//

std::string Brain::ideas[i] = {
	"cat idea",
	"dog idea",
	"The household cat is really a tiger that has underwent three counselling programs.",
	"The fate of animals is of far greater importance to me than the fear of appearing ridiculous",
	"The heart of animals is the foundation of their life, the sovereign of everything within them, the sun of their microcosm, that upon which all growth depends, from which all power proceeds",
	"Properly trained, a man can be dog’s best friend",
	"In ancient times cats were worshipped as gods; they have not forgotten this",
	"Always remember, a cat looks down on man, a dog looks up to man, but a pig will look man right in the eye and see his equal",
	"Anybody who doesn’t know what soap tastes like never washed a dog.",
	"If you think dogs can’t count, try putting three dog biscuits in your pocket and then giving Fido only two of them",
	"Dogs come when they’re called; cats take a message and get back to you later",
	"Animals are such agreeable friends -- they ask no questions, they pass no criticisms",
	"God in his wisdom made the fly, And then forgot to tell us why",
	"Size isn’t everything. The whale is endangered, while the ant continues to do just fine",
	"If you’re a zebra being chased by a lion, maybe just stop in front of a giant bar code?",
	"We’ve all done this because we’re so mature. You see a cow on the side of the road, stick your head out the window and go, “Mooooo!”  Like we expect the cow to think, “Hey, there’s another cow, driving that car! How can he afford that?",
	"I admit opening an alligator petting zoo was not the best idea, but I told the kids to be careful so there’s plenty of blame to go around",
	"I take my pet lion to church every Sunday. He has to eat.",
	"My friend was attacked by a duck. I yelled “duck!” to warn him, but it just made it worse",
	"A hen is just an egg’s way of making another egg",
	"The more excited the rooster gets, the higher his voice goes. He’s got a little bit of a Barney Fife quality to him",
	"Noise proves nothing. Often a hen who has merely laid an egg cackles as if she laid an asteroid.",
	"Our perfect companions never have fewer than four feet",
	"If you hold a cat by the tail you learn things you cannot learn any other way",
	"Time spent with cats is never wasted",
	"Cats have a scam going – you buy the food, they eat the food, they go away; that’s the deal.",
	"Outside of a dog, a book is a man’s best friend. Inside of a dog, it’s too dark to read",
	"Dogs are the leaders of the planet. If you see two life forms, one of them’s making a poop, the other one’s carrying it for him, who would you assume is in charge?",
	"No one can feel as helpless as the owner of a sick goldfish",
	"The better I get to know men, the more I find myself loving dogs",
	"Every time you lose an animal, it’s like losing a brick from the house. Pretty soon the house just falls down, you know?",
	"An animal’s eyes have the power to speak a great language.",
	"You can always tell about somebody by the way they put their hands on an animal",
	"In the animal kingdom, the rule is, eat or be eaten; in the human kingdom, define or be defined",
	"I’ve never met an animal I didn’t like, and I can’t say the same thing about people",
	"Man is an animal that makes bargains: no other animal does this - no dog exchanges bones with another.",
	"A camel is a very awkward animal to ride, and it’s very hard to get used to because they’re not very graceful",
	"Take the crocodile, for example, my favourite animal. There are 23 species. Seventeen of those species are rare or endangered. They’re on the way out, no matter what anyone does or says, you know",
	"There was never a moment in my life that I remember not being a crazy animal lover!",
	"Three rebels against the light: the thief, the adulterer, and the bat",
	"Beaver do better work than the Corps of Engineers",
	"The happiness of the bee and the dolphin is to exist. For man, it is to know that and to wonder at it",
	"The fox provides for himself, but God provides for the lion",
	"Dogs never bite me. Just humans",
	"Never did he fail to respond savagely to the chatter of the squirrel he had first met on the blasted pine.",
	"The eagle may soar; beavers build dams",
	"My fashion philosophy is if you’re not covered in dog hair, your life is empty",
	"Scratch a dog and you’ll find a permanent job.",
	"Dogs have boundless enthusiasm but no sense of shame. I should have a dog as a life coach"	
};

Brain(){
	std::cout << "Brain has been constructed" << std::endl;
}

Brain(Brain const& other){
	std::cout << "Brain has been constructed" << std::endl;
}

Brain::~Brain(){
	std::cout << "Brain has been destroyed." << std::endl;
}

void get_random_idea(){
	static i;
	std::cout << this->ideas[i] << std::endl;
	i = (i + 1) % 99;
}

//________________________________________________________________________//
//Animal//

Animal::Animal():
type("none")
{}

std::string Animal::getType() const
{return this->type;}

void Animal::makeSound() const
{
	if (this->type == "Cat")
		std::cout << "meowwwwwwwwwwwwwwwww!!!!!!" << std::endl;
	else if (this->type == "Dog")
		std::cout << "wooofffff wooooofffff!!!" << std::endl;
	else
		std::cout << "what does it sound like?" << std::endl;
}

Animal::Animal(Animal const& other): type(other.type)
{std::cout << "Animal " << type << " has been created" <<std::endl;}

Animal::~Animal()
{std::cout << "Animal " << type << "was destroyed." << std::endl;}
