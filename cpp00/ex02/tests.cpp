// ************************************************************************** //
//                                                                            //
//                tests.cpp for GlobalBanksters United                        //
//                Created on  : Thu Nov 20 23:45:02 1989                      //
//                Last update : Wed Jan 04 09:23:52 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //

#include <vector> // std::vector
#include <algorithm> // std::for_each
#include <functional> // std::mem_fun_ref
#include "Account.hpp" // Account class


int		main( void ) {

	typedef std::vector<Account::t>							  accounts_t; // accounts type
	typedef std::vector<int>								  ints_t; // deposits/withdrawals type
	typedef std::pair<accounts_t::iterator, ints_t::iterator> acc_int_t; // accounts/deposits/withdrawals iterator type

	int	const				amounts[]	= { 42, 54, 957, 432, 1234, 0, 754, 16576 };  // initial amounts
	size_t const			amounts_size( sizeof(amounts) / sizeof(int) ); // number of accounts
	accounts_t				accounts( amounts, amounts + amounts_size ); // accounts
	accounts_t::iterator	acc_begin	= accounts.begin(); // accounts iterator
	accounts_t::iterator	acc_end		= accounts.end(); // accounts iterator

	int	const			d[]			= { 5, 765, 564, 2, 87, 23, 9, 20 }; // deposits
	size_t const		d_size( sizeof(d) / sizeof(int) ); // number of deposits
	ints_t				deposits( d, d + d_size ); // deposits
	ints_t::iterator	dep_begin	= deposits.begin(); // deposits iterator
	ints_t::iterator	dep_end		= deposits.end(); // deposits iterator

	int	const			w[]			= { 321, 34, 657, 4, 76, 275, 657, 7654 }; // withdrawals //some of them were refused
	size_t const		w_size( sizeof(w) / sizeof(int) );
	ints_t				withdrawals( w, w + w_size );
	ints_t::iterator	wit_begin	= withdrawals.begin();
	ints_t::iterator	wit_end		= withdrawals.end();

	Account::displayAccountsInfos();
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) ); // display accounts status 
	//mem_fun_ref is a

	for ( acc_int_t it( acc_begin, dep_begin );
		  it.first != acc_end && it.second != dep_end;
		  ++(it.first), ++(it.second) ) {

		(*(it.first)).makeDeposit( *(it.second) ); 
	}

	Account::displayAccountsInfos();
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );  // display accounts status

	for ( acc_int_t it( acc_begin, wit_begin );
		  it.first != acc_end && it.second != wit_end;
		  ++(it.first), ++(it.second) ) {

		(*(it.first)).makeWithdrawal( *(it.second) ); 
	}

	Account::displayAccountsInfos();
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );

	return 0;
}


// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //
