#include<iostream>
#include<string>
#include<vector>

class Player
{
public:
	Player(const std::string& name = "");
	std::string getName() const;
	Player* getNext() const;
	void setNext(Player* next);

private:
	std::string mName;
	Player* mNext;
};

Player::Player(const string& name) :mName(name), mNext(0)
{}

std::string Player::getName() const
{
	return mName;
}

Player* Player::getNext() const
{
	return mNext;
}

void Player::setNext(Player* next)
{
	mNext = next;
}

// Lobby class
class Lobby
{
public:
	Lobby();
	~Lobby();
	void AddPlayer();
	void RemovePlayer();
	void clear();

private:
	Player* mHead;
};

Lobby::Lobby():mHead(0)
{}

Lobby::~Lobby()
{
	clear();
}

void Lobby::AddPlayer()
{
	std::cout << "Enter the name of the player" << std::endl;
	std::string name;
	std::cin >> name;
	Player* pNewPlayer = new Player(name);

	if (mHead== 0)
	{
		mHead = pNewPlayer;
	}

	else
	{
		Player* pIter = mHead;
		while (pIter->getNext() != 0)
		{
			pIter = pIter->getNext();
		}
		pIter->setNext(pNewPlayer);
	}
}

void Lobby::RemovePlayer()
{
	if (mHead == 0)
	{
		std::cout << "The game lobby is empty \n";
	}
	else
	{
		Player* pTemp = mHead;
		mHead = mHead->getNext();
		delete pTemp;
	}
}

void Lobby::clear()
{
	while (mHead != 0)
	{
		RemovePlayer();
	}
}

ostream& operator<<(ostream& os, const Lobby& aLobby)
{
	Player* pIter = aLobby.mHead;
	os << "\n Heere who are in the lobby\n";
	if (pIter == 0)
	{
		os << "The lobby is empty\n";
	}
	else
	{
		while (pIter != 0)
		{
			os << pIter - < getName() << std::endl;
			pIter = pIter - < getNext();
		}
	}
	return os;
}

int main()
{
	Lobby myLobby;
	int choice;

	do
	{
		std::cout << myLobby;
		std::cout << "\n game just begin";
		std::cout << "0- exit the program\n";
		std::cout << "1- add a play\n" << std::endl;
		std::cout << "2- Removve a player\n" << std::endl;
		std::cout << "3- Clear the lobby\n" << std::endl;
		std::endl << "Enter a chice\n";
		std::cin >> choice;

		switch (choice)
		{
		case 0: std::cout << "Goodbye\n";
			break;
		case 1:myLobby.AddPlayer();
			break;
		case 2: myLobby.RemovePlayer();
			break;
		case 3:myLobby.clear();
			break;
		default: std::cout << "That was not a valid choice";

		}
		while (choice != 0);
		return 0;
	}
}