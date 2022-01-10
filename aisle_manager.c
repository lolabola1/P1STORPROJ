// ----------------------------------------------------------------------------
// Overview
// ----------------------------------------------------------------------------
//  This is a program to keep track of the items in a small aisle of a store.
//
//  A store's aisle is represented by a 64-bit long integer, which is broken
//  into 4 16-bit sections representing one type of item each. 16 bits is the
//  size of the "short" datatype in C, so one section can be represented by
//  one short.
//
//  Aisle Layout:
//
//    Within an aisle, sections are indexed starting with the least-significant
//    section being at index 0 and continuing up until one less than the number
//    of sections.
//
//    Example aisle:
//
//                MSB                                                       LSB
//                  +-------------+-------------+-------------+-------------+
//                  |  Section 3  |  Section 2  |  Section 1  |  Section 0  |
//                  +-------------+-------------+-------------+-------------+
//                  |             |             |             |             |
//      bit offset: 64            48            32            16            0
//
//  Section Layout:
//
//    A section in an aisle is broken into 2 parts. The 6 most significant bits
//    represent a unique identifier for the type of item stored in that
//    section. The rest of the bits in a section (10 least significant)
//    indicate individual spaces for items in that section. For each of the 10
//    bits/spaces, a 1 indicates that an item of the section's type is stored
//    there and a 0 indicates that the space is empty.
//
//    Example aisle section: 0x651A
//
//                MSB                               LSB
//                  +-----------+-------------------+
//                  |0 1 1 0 0 1|0 1 0 0 0 1 1 0 1 0|
//                  +-----------+-------------------+
//                  | item id   | section spaces    |
//      bit offset: 16          10                  0
//
//      In this example, the item id is 0b011001, and there are currently 4
//      items stored in the section (at bit offsets 8, 4, 3, and 1) and 6
//      vacant spaces.
//
//  Written by Alvin Lebeck (alvy@cs.duke.edu) inspired by problems from
//  Porter Jones (pbjones@cs.washington.edu)
// ------------------------------------------------------------------------------------------------

#include "test_util.h"

#define NUM_SPACES 10

// TODO: Fill in these with the correct hex values

// Mask for extracting a section from the least significant bits of an aisle.
// (aisle & SECTION_MASK) should preserve a section's worth of bits at the lower
// end of the aisle and set all other bits to 0
#define SECTION_MASK 0x????

// Mask for extracting the spaces bits from a section
// (section & SPACES_MASK) should preserve all the spaces bits in a section
// and set all non-spaces bits to 0.
#define SPACES_MASK 0x????

// Mask for extracting the ID bits from a section
// (section & ID_MASK) should preserve all the id bits in a section
// and set all non-id bits to 0.
#define ID_MASK 0x????

// Given a an aisle and a section index.
//
// Returns the section at the given index of the given aisle.
//
// Can assume the index is a valid index (0-3 inclusive)
unsigned short get_section(unsigned long aisle, int index) {
// TODO: Implement this function
  return 0;
}

// Given an aisle and a section index.
//
// Returns the id of the section at the given index of the given aisle.
// The returned short should have the least 6 significant bits set to the id
// and the 10 most significant bits set to 0.
//
// Can assume the index is a valid index (0-3 inclusive)
unsigned short get_id(unsigned long aisle, int index) {
// TODO: Implement this function
  return 0;
}

// Given an aisle and a section index.
//
// Returns the spaces of the section at the given index of the given aisle.
// The returned short should have the least 10 significant bits set to the spaces
// and the 6 most significant bits set to 0.
//
// Can assume the index is a valid index (0-3 inclusive)
unsigned short get_spaces(unsigned long aisle, int index) {
// TODO: Implement this function
  return 0;
}

// Given an aisle, a section index, and a short representing a 
// new bit pattern to be used for section.
//
// Sets the section at the given index of the given aisle to
// to the new bit pattern.
//
// Returns the updated aisle.
//
// Can assume the index is a valid index (0-3 inclusive)

// Alternative solution w/shifting
unsigned long set_section(unsigned long aisle, int index, unsigned short new_section) {
  // TODO: Implement this function
  return 0;
}

// Given an aisle, a section index, and a short representing a 
// new bit pattern to be used for the id of the section.
//
// Sets the id for the section at the given index of the given aisle to
// to the new bit pattern. The new id is in the least significant bits
// of the given bit pattern new_id. If the new bit pattern does not fit in
// 6 bits (some more significant bit is nonzero) then the method should 
// leave the id unchanged.
// 
// Example:
//  aisle = 0x 0000 0000 0000 FC00
//  index = 0
//  new_id = 0x003A
//  Returns: 0x 0000 0000 0000 E800
//  Explanation: The least significant 6 bits of new_id are 111010,
//  so those are used as the 6 most significant bits of the least significant
//  section of the aisle. Thus, the aisle will have value
//  0b 111010 0000000000 = 0xE800.
//
// Returns the updated aisle.
//
// Can assume the index is a valid index (0-3 inclusive)
unsigned long set_id(unsigned long aisle, int index, unsigned short new_id) {
// TODO: Implement this function
  return 0;
}

// Given an aisle, a section index, and a short representing a 
// new bit pattern to be used for the spaces of the section.
//
// Sets the spaces for the section at the given index of the given aisle to
// to the new bit pattern. The new spaces pattern will be in the least significant bits
// of the given bit pattern. If the new bit pattern does not fit in 10 bits,
// then the method should leave the spaces unchanged.
//
// Returns the updated aisle.
//
// Can assume the index is a valid index (0-3 inclusive)
unsigned long set_spaces(unsigned long aisle, int index, unsigned short new_spaces) {
// TODO: Implement this function
  return 0;
}

// Given an aisle and a section index.
// 
// Returns the number of items in the section 
// at the given index of the given aisle.
//
// Can assume the index is a valid index (0-3 inclusive)
unsigned short num_items(unsigned long aisle, int index) {
// TODO: Implement this function
  return 0;
}


// Given an aisle, a section index, and the desired
// number of items to add.
//
// Add at most the given number of items to the section at the given index in the
// given aisle. Items should be added to the least significant spaces possible.
// If a given n is larger than or equal to the number of empty spaces in the 
// section, then the section should appear full after the method finishes.
// 
// Returns the updated aisle.
//
// Can assume the index is a valid index (0-3 inclusive)
unsigned long add_items(unsigned long aisle, int index, int n) { 
// TODO: Implement this function
  return 0;
}

// Given an aisle, a section index, and the desired
// number of items to remove.
//
// Remove at most the given number of items from the section at the given index in the
// given aisle. Items should be removed from the least significant spaces possible.
// If a given n is larger than or equal to the number of items in the 
// section, then the section should appear empty after the method finishes.
//
// Returns the updated aisle.
//
// Can assume the index is a valid index (0-3 inclusive)
unsigned long remove_items(unsigned long aisle, int index, int n) {
// TODO: Implement this function
  return 0;
}

// Given an aisle, a section index, and a space index.
//
// Toggle the item in the given space index of the section at 
// the given section index in the given aisle.
//
// Toggling means that if the space was previously empty, it should now be filled with an item, 
// and if the space was previously filled it should now be empty.
//
// Returns the updated aisle.
//
// Can assume the section index is a valid index (0-3 inclusive)
// Can assume the spaces index is a valid index (0-9 inclusive)
unsigned long toggle_space(unsigned long aisle, int section_index, int space_index) {
// TODO: Implement this function
  return 0;
}

// Given an aisle, a section index, and a number
// of slots to rotate by.
//
// Rotate the items in the section at the
// given index of the given aisle to the left by the given number of slots
//
// For example, if the spaces are 0b0111100001, then rotating
// left by 2 results in the spaces 0b1110000101
//
// Returns the updated aisle.
//
// Can assume the index is a valid index (0-3 inclusive)
// NOTE: do not assume n < NUM_SPACES 
// (hint: think about what rotating by a value >= NUM_SPACES is equivalent to)
unsigned long rotate_items_left(unsigned long aisle, int index, int n) {
// TODO: Implement this function
  return 0;
}

// Given an aisle, a section index, and a number
// of slots to rotate by.
//
// Rotate the items in the section at the
// given index of the given aisle to the right by the given number of slots
//
// For example, if the spaces are 0b1000011110, then rotating
// right by 2 results in the spaces 0b1010000111
//
// Returns the updated aisle.
//
// Can assume the index is a valid index (0-3 inclusive)
// NOTE: do not assume n < NUM_SPACES 
// (hint: think about what rotating by a value >= NUM_SPACES is equivalent to)
unsigned long rotate_items_right(unsigned long aisle, int index, int n) {
// TODO: Implement this function
  return 0;
}

