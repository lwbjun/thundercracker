////////////////////////////////////////////////////////////////////////////////////////////////////
// Copyright (C) 2012 - TRACER. All rights reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "PuzzleData.h"
#include "Book.h"
#include "Puzzle.h"

////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////

namespace Buddies { namespace {

////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////

const CutsceneLine kCutsceneLineDefault[] =
{
    CutsceneLine(),
};
const BuddyId kCutsceneBuddiesDefault[] =
{
    BUDDY_GLUV,
    BUDDY_SULI,
};
const BuddyId kBuddiesDefault[] =
{
    BUDDY_GLUV,
    BUDDY_SULI,
    BUDDY_RIKE,
    BUDDY_BOFF,
    BUDDY_ZORG,
    BUDDY_MARO,
    BUDDY_AMOR,
    BUDDY_DROO,
    BUDDY_EROL,
    BUDDY_FLUR,
    BUDDY_VEAX,
    BUDDY_YAWP,
};
const Piece kPiecesDefaultStart[][NUM_SIDES] =
{
    {
        Piece(BUDDY_GLUV, Piece::PART_HAIR),
        Piece(BUDDY_GLUV, Piece::PART_EYE_LEFT),
        Piece(BUDDY_GLUV, Piece::PART_MOUTH),
        Piece(BUDDY_GLUV, Piece::PART_EYE_RIGHT),
    },
    {
        Piece(BUDDY_SULI, Piece::PART_HAIR),
        Piece(BUDDY_SULI, Piece::PART_EYE_LEFT),
        Piece(BUDDY_SULI, Piece::PART_MOUTH),
        Piece(BUDDY_SULI, Piece::PART_EYE_RIGHT),
    },
    {
        Piece(BUDDY_RIKE, Piece::PART_HAIR),
        Piece(BUDDY_RIKE, Piece::PART_EYE_LEFT),
        Piece(BUDDY_RIKE, Piece::PART_MOUTH),
        Piece(BUDDY_RIKE, Piece::PART_EYE_RIGHT),
    },
    {
        Piece(BUDDY_BOFF, Piece::PART_HAIR),
        Piece(BUDDY_BOFF, Piece::PART_EYE_LEFT),
        Piece(BUDDY_BOFF, Piece::PART_MOUTH),
        Piece(BUDDY_BOFF, Piece::PART_EYE_RIGHT),
    },
    {
        Piece(BUDDY_ZORG, Piece::PART_HAIR),
        Piece(BUDDY_ZORG, Piece::PART_EYE_LEFT),
        Piece(BUDDY_ZORG, Piece::PART_MOUTH),
        Piece(BUDDY_ZORG, Piece::PART_EYE_RIGHT),
    },
    {
        Piece(BUDDY_MARO, Piece::PART_HAIR),
        Piece(BUDDY_MARO, Piece::PART_EYE_LEFT),
        Piece(BUDDY_MARO, Piece::PART_MOUTH),
        Piece(BUDDY_MARO, Piece::PART_EYE_RIGHT),
    },
    {
        Piece(BUDDY_AMOR, Piece::PART_HAIR),
        Piece(BUDDY_AMOR, Piece::PART_EYE_LEFT),
        Piece(BUDDY_AMOR, Piece::PART_MOUTH),
        Piece(BUDDY_AMOR, Piece::PART_EYE_RIGHT),
    },
    {
        Piece(BUDDY_DROO, Piece::PART_HAIR),
        Piece(BUDDY_DROO, Piece::PART_EYE_LEFT),
        Piece(BUDDY_DROO, Piece::PART_MOUTH),
        Piece(BUDDY_DROO, Piece::PART_EYE_RIGHT),
    },
    {
        Piece(BUDDY_EROL, Piece::PART_HAIR),
        Piece(BUDDY_EROL, Piece::PART_EYE_LEFT),
        Piece(BUDDY_EROL, Piece::PART_MOUTH),
        Piece(BUDDY_EROL, Piece::PART_EYE_RIGHT),
    },
    {
        Piece(BUDDY_FLUR, Piece::PART_HAIR),
        Piece(BUDDY_FLUR, Piece::PART_EYE_LEFT),
        Piece(BUDDY_FLUR, Piece::PART_MOUTH),
        Piece(BUDDY_FLUR, Piece::PART_EYE_RIGHT),
    },
    {
        Piece(BUDDY_VEAX, Piece::PART_HAIR),
        Piece(BUDDY_VEAX, Piece::PART_EYE_LEFT),
        Piece(BUDDY_VEAX, Piece::PART_MOUTH),
        Piece(BUDDY_VEAX, Piece::PART_EYE_RIGHT),
    },
    {
        Piece(BUDDY_YAWP, Piece::PART_HAIR),
        Piece(BUDDY_YAWP, Piece::PART_EYE_LEFT),
        Piece(BUDDY_YAWP, Piece::PART_MOUTH),
        Piece(BUDDY_YAWP, Piece::PART_EYE_RIGHT),
    },
};
const Piece kPiecesDefaultEnd[][NUM_SIDES] =
{
    {
        Piece(BUDDY_GLUV, Piece::PART_HAIR, true),
        Piece(BUDDY_GLUV, Piece::PART_EYE_LEFT, true),
        Piece(BUDDY_GLUV, Piece::PART_MOUTH, true),
        Piece(BUDDY_GLUV, Piece::PART_EYE_RIGHT, true),
    },
    {
        Piece(BUDDY_SULI, Piece::PART_HAIR, true),
        Piece(BUDDY_SULI, Piece::PART_EYE_LEFT, true),
        Piece(BUDDY_SULI, Piece::PART_MOUTH, true),
        Piece(BUDDY_SULI, Piece::PART_EYE_RIGHT, true),
    },
    {
        Piece(BUDDY_RIKE, Piece::PART_HAIR, true),
        Piece(BUDDY_RIKE, Piece::PART_EYE_LEFT, true),
        Piece(BUDDY_RIKE, Piece::PART_MOUTH, true),
        Piece(BUDDY_RIKE, Piece::PART_EYE_RIGHT, true),
    },
    {
        Piece(BUDDY_BOFF, Piece::PART_HAIR, true),
        Piece(BUDDY_BOFF, Piece::PART_EYE_LEFT, true),
        Piece(BUDDY_BOFF, Piece::PART_MOUTH, true),
        Piece(BUDDY_BOFF, Piece::PART_EYE_RIGHT, true),
    },
    {
        Piece(BUDDY_ZORG, Piece::PART_HAIR, true),
        Piece(BUDDY_ZORG, Piece::PART_EYE_LEFT, true),
        Piece(BUDDY_ZORG, Piece::PART_MOUTH, true),
        Piece(BUDDY_ZORG, Piece::PART_EYE_RIGHT, true),
    },
    {
        Piece(BUDDY_MARO, Piece::PART_HAIR, true),
        Piece(BUDDY_MARO, Piece::PART_EYE_LEFT, true),
        Piece(BUDDY_MARO, Piece::PART_MOUTH, true),
        Piece(BUDDY_MARO, Piece::PART_EYE_RIGHT, true),
    },
    {
        Piece(BUDDY_AMOR, Piece::PART_HAIR, true),
        Piece(BUDDY_AMOR, Piece::PART_EYE_LEFT, true),
        Piece(BUDDY_AMOR, Piece::PART_MOUTH, true),
        Piece(BUDDY_AMOR, Piece::PART_EYE_RIGHT, true),
    },
    {
        Piece(BUDDY_DROO, Piece::PART_HAIR, true),
        Piece(BUDDY_DROO, Piece::PART_EYE_LEFT, true),
        Piece(BUDDY_DROO, Piece::PART_MOUTH, true),
        Piece(BUDDY_DROO, Piece::PART_EYE_RIGHT, true),
    },
    {
        Piece(BUDDY_EROL, Piece::PART_HAIR, true),
        Piece(BUDDY_EROL, Piece::PART_EYE_LEFT, true),
        Piece(BUDDY_EROL, Piece::PART_MOUTH, true),
        Piece(BUDDY_EROL, Piece::PART_EYE_RIGHT, true),
    },
    {
        Piece(BUDDY_FLUR, Piece::PART_HAIR, true),
        Piece(BUDDY_FLUR, Piece::PART_EYE_LEFT, true),
        Piece(BUDDY_FLUR, Piece::PART_MOUTH, true),
        Piece(BUDDY_FLUR, Piece::PART_EYE_RIGHT, true),
    },
    {
        Piece(BUDDY_VEAX, Piece::PART_HAIR, true),
        Piece(BUDDY_VEAX, Piece::PART_EYE_LEFT, true),
        Piece(BUDDY_VEAX, Piece::PART_MOUTH, true),
        Piece(BUDDY_VEAX, Piece::PART_EYE_RIGHT, true),
    },
    {
        Piece(BUDDY_YAWP, Piece::PART_HAIR, true),
        Piece(BUDDY_YAWP, Piece::PART_EYE_LEFT, true),
        Piece(BUDDY_YAWP, Piece::PART_MOUTH, true),
        Piece(BUDDY_YAWP, Piece::PART_EYE_RIGHT, true),
    },
};
Puzzle sPuzzleDefault(
    "Default",
    "Default",
    kCutsceneBuddiesDefault, arraysize(kCutsceneBuddiesDefault),
    kCutsceneLineDefault, arraysize(kCutsceneLineDefault),
    kCutsceneBuddiesDefault, arraysize(kCutsceneBuddiesDefault),
    kCutsceneLineDefault, arraysize(kCutsceneLineDefault),
    0,
    kBuddiesDefault, arraysize(kBuddiesDefault),
    0,
    kPiecesDefaultStart,
    kPiecesDefaultEnd);

////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "PuzzleData_GENERATED.h"

////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////

}

////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////

const Puzzle &GetPuzzleDefault()
{
    return sPuzzleDefault;
}

////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////

unsigned int GetNumBooks()
{
    return arraysize(kBooks);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////

const Book &GetBook(unsigned int bookIndex)
{
    ASSERT(bookIndex < arraysize(kBooks));
    return kBooks[bookIndex];
}

////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////

const Puzzle &GetPuzzle(unsigned int bookIndex, unsigned int puzzleIndex)
{
    ASSERT(bookIndex < arraysize(kBookOffsets));
    unsigned int iPuzzle = kBookOffsets[bookIndex] + puzzleIndex;
    
    ASSERT(iPuzzle < arraysize(kPuzzles));
    return kPuzzles[iPuzzle];
}

////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////

}

////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////