#pragma once

#include "Location.hpp"

class Unit 
{
	int		_damage,
			_maxHP,
			_maxShield,
			_currentHP,
			_currentShield,
			_range,
			_moveCooldown,
			_weaponCooldown,
			_lastMove,
			_lastAttack;

public:

	Unit()
		 : _damage(0)
		 , _maxHP(0)
		 , _maxShield(0)
		 , _currentHP(0)
		 , _currentShield(0)
		 , _range(0)
		 , _moveCooldown(0)
		 , _weaponCooldown(0)
		 , _lastMove(-1)
		 , _lastAttack(-1)
	{

	}

	Unit(const int & damage, const int & maxHP,const int & shield, const int & currentHP,const int & currentshield,
		 const int & range, const int & moveCooldown, const int & weaponCooldown) 
		 : _damage(damage)
		 , _maxHP(maxHP)
		 , _maxShield(shield)
		 , _currentHP(currentHP)
		 , _currentShield(currentshield)
		 , _range(range)
		 , _moveCooldown(moveCooldown)
		 , _weaponCooldown(weaponCooldown)
		 , _lastMove(-1)
		 , _lastAttack(-1)
	{

	}

	 int damage()			const { return _damage; }
	 int maxHP()			const { return _maxHP; }
	 int maxShield()			const { return _maxShield;}
	 int currentHP()		const { return _currentHP; }
	 int currentShield()    const { return _currentShield;}
	 int range()			const { return _range; }
	 int moveCooldown()	const { return _moveCooldown; }
	 int weaponCooldown()	const { return _weaponCooldown; }
	 int lastMove()		const { return _lastMove; }
	 int lastAttack()		const { return _lastAttack; }
};
