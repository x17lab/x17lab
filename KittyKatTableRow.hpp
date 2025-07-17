///
/// KittyKatTable.hpp
///

#ifndef KITTYKATTABLE_GUARD
#define KITTYKATTABLE_GUARD

#include "../KittyKatRWXDef/KittyKatRWXDef.hpp"


/// <summary>
/// Represents a key-value mapping in a hash table, enabling 
/// efficient data storage.
/// </summary>
/// <param="KittyAssignerT">The type of the key being stored.</param>
/// <param="KittyT">The type of the associated value.</param>
template<typename KittyAssignerT,
		 typename KittyT>
class KittyKatTableRow
{
	/// <summary>
	/// A feline-friendly alias for <see cref="KittyAssignerT"/>.
	/// </summary>  
	using MeowKittyKatAssignerT = KittyAssignerT;

	/// <summary>
	/// A feline-friendly alias for <see cref="KittyT"/>.
	/// </summary>
	using MeowKittyKatT         = KittyT;

	/// <summary>
	/// Represents the generic type parameter 
	/// for keys stored in the hashtable.
	/// </summary>
	MeowKittyKatAssignerT        MeowKey;
	
    /// <summary>
    /// Contains the raw predefined data
	/// for MeowKittyKat.
    /// </summary>
	MeowKittyKatT			     MeowRaw; 

public:

	/// <summary>
	/// Retrieves the internal container key being located 
	/// in a class wrapper.
	/// </summary>
	/// <returns>The key.</returns>
	KITTY_FORCEINLINE
	KITTY_CONSTEXPR
	KittyT KittyKey() noexcept
	{return (MeowKey);}

	/// <summary>
	/// Retrieves the internal container data.
	/// </summary>
	/// <returns>The data.</returns>
    KITTY_FORCEINLINE
	KITTY_CONSTEXPR
	KittyT KittyRaw() noexcept
	{return (MeowRaw);}

	 /// <summary>
	 /// Setter function which does sets the key.
	 /// </summary>
	 /// <param="Key">Key.</param>
    KITTY_FORCEINLINE
    KITTY_CONSTEXPR
	KITTY_VOID KittySetKey(MeowKittyKatAssignerT Key) noexcept
	{MeowKey = (Key);}

	/// <summary>
	/// Set the internal data being stored 
	/// in this class wrapper.
	/// </summary>
	/// <param="Item">Item.</param>
	KITTY_FORCEINLINE
    KITTY_CONSTEXPR
    KITTY_VOID KittySetT(MeowKittyKatT Item) noexcept
	{MeowRaw = (Item);}
};

#endif
