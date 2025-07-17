////
/// KittyKatXelorNode.hpp
///

#ifndef KITTYKATXELORNODEGUARD
#define KITTYKATXELORNODEGUARD

#include "../KittyKatRWXDef/KittyKatRWXDef.hpp"


/// <summary>
/// Macro to enforce inlining of a function, replacing the standard `forceinline`.
/// </summary>
#define MEOWXELOR_FORCEINLINE __forceinline

/// <summary>
/// Macro to replace standard `constexpr` with a custom implementation or alias.    
/// </summary>
#define MEOWXELOR_CONSTEXPR     constexpr


template<typename XelorT>
class KittyKatXelorNode
{
    /// <summary>
    /// Owning pointer to a `KittyKatXelorNode<XelorT>` class insance.
    /// </summary>
    using KittyKatXelorNodeStarT = KittyKatXelorNode<XelorT>*;

    /// <summary>
    /// // A raw pointer to a dynamically allocated 
    /// `KittyKatXelorNode<XelorT>` object.  
    /// </summary> 
    KittyKatXelorNodeStarT MEOWXelorNext;

    /// <summary>
    /// The data value stored within this item. 
    /// </summary>
    XelorT MEOWXelorRef;

public:
 
       /// <summary>
       /// Initializes a new XelorNode class instance with default values:
       /// XelorNext set to nullptr (indicating no next node).
       /// XelorRef set to 0 (unsigned zero initialization).
       /// </summary>
       MEOWXELOR_FORCEINLINE
       MEOWXELOR_CONSTEXPR
       KittyKatXelorNode() : MEOWXelorNext {nullptr}, MEOWXelorRef {0u}{}

       /// <summary>
       /// Initializes a new XelorNode class with provided value.
       /// </summary>
       /// <param="Item">Item to set.</param>
       explicit
       MEOWXELOR_FORCEINLINE
       MEOWXELOR_CONSTEXPR
       KittyKatXelorNode(XelorT Item) : MEOWXelorNext {nullptr}, MEOWXelorRef {Item}{}

       /// <summary>
       /// Initializes a new XelorNode class with the proveded item, 
       /// and sets the next item of the class instance.
       /// </summary>
       /// <param="Item">       Item to set (item setter).</param>
       /// <param="FollowNext"> Next item to follow.</param>
       explicit
       MEOWXELOR_FORCEINLINE
       MEOWXELOR_CONSTEXPR
       KittyKatXelorNode(XelorT Item, KittyKatXelorNodeStarT FollowNext) noexcept
       {
           if (FollowNext != (nullptr) &&
               Item       > (0u))
           {
               KittyKatXelorNodeStarT FollowNextInternal = {FollowNext};
               MEOWXelorRef = {Item};
           }
       }

       /// <summary>
       /// Retrive the value of a linked list (getter function).
       /// </summary>
       /// <returns>Node data.</returns>
       MEOWXELOR_FORCEINLINE
       MEOWXELOR_CONSTEXPR
       XelorT KittyT() noexcept
       {
           /// <summary>
           /// Return the value's data (getter function).
           /// </summary>
           return (MEOWXelorRef);
       }

       /// <summary>
       /// Sets the item for this linked list via internal function (setter).
       /// </summary>
       /// <param="Item">Item to set.</param>
       MEOWXELOR_FORCEINLINE
       MEOWXELOR_CONSTEXPR
       KittyKatVoid KittyNextSetter(XelorT Item) noexcept
       {
           /// <summary>
           /// Set the value's data (setter function).
           /// </summary>
           MEOWXelorRef = (Item);
       }

       /// <summary>
       /// Get the next node which does followed by this node's instance.
       /// </summary>
       /// <returns>Next node followed by this node instance.</returns>
       MEOWXELOR_FORCEINLINE
       MEOWXELOR_CONSTEXPR
       KittyKatXelorNodeStarT KittyNextGetter() noexcept
       {
           /// <summary>
           /// Next node, followed by this node instance.
           /// </summary>
           return (MEOWXelorNext);
       }

       /// <summary>
       /// Set next node followed by this node instance.
       /// </summary>
       /// <param="Next">Next node.</param>
       MEOWXELOR_FORCEINLINE
       MEOWXELOR_CONSTEXPR
       KittyKatVoid KittyNextSetter(KittyKatXelorNodeStarT Next) noexcept
       {
           /// <summary>
           /// Sets the item in this linked list class.
           /// </summary>
           MEOWXelorNext = (Next);
       }         
};

#endif

