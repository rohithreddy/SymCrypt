//
// ec_internal_curves.c   Parameters for internally supported curves.
//
// Copyright (c) Microsoft Corporation. Licensed under the MIT license.
//
//

#include "precomp.h"

// Do not delete the following preprocessor directive.
// It is used for folding the parameters.
#if 1

/***********************************
 *                                 *
 *           NIST CURVES           *
 *                                 *
 ***********************************/

static const BYTE rgbNistP192[] = {
    //dwVersion
    0x01, 0x00, 0x00, 0x00,
    //dwCurveType
    0x01, 0x00, 0x00, 0x00,
    //dwCurveGenerationAlgId
    0x00, 0x00, 0x00, 0x00,
    //cbFieldLength
    0x18, 0x00, 0x00, 0x00,
    //cbSubgroupOrder
    0x18, 0x00, 0x00, 0x00,
    //cbCofactor
    0x01, 0x00, 0x00, 0x00,
    //cbSeed
    0x00, 0x00, 0x00, 0x00,
    //p
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    //A
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC,
    //B
    0x64, 0x21, 0x05, 0x19, 0xE5, 0x9C, 0x80, 0xE7,
    0x0F, 0xA7, 0xE9, 0xAB, 0x72, 0x24, 0x30, 0x49,
    0xFE, 0xB8, 0xDE, 0xEC, 0xC1, 0x46, 0xB9, 0xB1,
    //x
    0x18, 0x8D, 0xA8, 0x0E, 0xB0, 0x30, 0x90, 0xF6,
    0x7C, 0xBF, 0x20, 0xEB, 0x43, 0xA1, 0x88, 0x00,
    0xf4, 0xFF, 0x0A, 0xFD, 0x82, 0xFF, 0x10, 0x12,
    //y
    0x07, 0x19, 0x2B, 0x95, 0xFF, 0xC8, 0xDA, 0x78,
    0x63, 0x10, 0x11, 0xED, 0x6B, 0x24, 0xCD, 0xD5,
    0x73, 0xF9, 0x77, 0xA1, 0x1E, 0x79, 0x48, 0x11,
    //q
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0x99, 0xDE, 0xF8, 0x36,
    0x14, 0x6B, 0xC9, 0xB1, 0xB4, 0xD2, 0x28, 0x31,
    //h
    0x01
};

static const BYTE rgbNistP224[] = {
    //dwVersion
    0x01, 0x00, 0x00, 0x00,
    //dwCurveType
    0x01, 0x00, 0x00, 0x00,
    //dwCurveGenerationAlgId
    0x00, 0x00, 0x00, 0x00,
    //cbFieldLength
    0x1C, 0x00, 0x00, 0x00,
    //cbSubgroupOrder
    0x1C, 0x00, 0x00, 0x00,
    //cbCofactor
    0x01, 0x00, 0x00, 0x00,
    //cbSeed
    0x00, 0x00, 0x00, 0x00,
    //p
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01,
    //A
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFE,
    //B
    0xB4, 0x05, 0x0A, 0x85, 0x0C, 0x04, 0xB3, 0xAB,
    0xF5, 0x41, 0x32, 0x56, 0x50, 0x44, 0xB0, 0xB7,
    0xD7, 0xBF, 0xD8, 0xBA, 0x27, 0x0B, 0x39, 0x43,
    0x23, 0x55, 0xFF, 0xB4,
    //x
    0xB7, 0x0E, 0x0C, 0xBD, 0x6B, 0xB4, 0xBF, 0x7F,
    0x32, 0x13, 0x90, 0xB9, 0x4A, 0x03, 0xC1, 0xD3,
    0x56, 0xC2, 0x11, 0x22, 0x34, 0x32, 0x80, 0xD6,
    0x11, 0x5C, 0x1D, 0x21,
    //y
    0xBD, 0x37, 0x63, 0x88, 0xB5, 0xF7, 0x23, 0xFB,
    0x4C, 0x22, 0xDF, 0xE6, 0xCD, 0x43, 0x75, 0xA0,
    0x5A, 0x07, 0x47, 0x64, 0x44, 0xD5, 0x81, 0x99,
    0x85, 0x00, 0x7E, 0x34,
    //q
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x16, 0xA2,
    0xE0, 0xB8, 0xF0, 0x3E, 0x13, 0xDD, 0x29, 0x45,
    0x5C, 0x5C, 0x2A, 0x3D,
    //h
    0x01
};

static const BYTE rgbNistP256[] = {
    //dwVersion
    0x01, 0x00, 0x00, 0x00,
    //dwCurveType
    0x01, 0x00, 0x00, 0x00,
    //dwCurveGenerationAlgId
    0x00, 0x00, 0x00, 0x00,
    //cbFieldLength
    0x20, 0x00, 0x00, 0x00,
    //cbSubgroupOrder
    0x20, 0x00, 0x00, 0x00,
    //cbCofactor
    0x01, 0x00, 0x00, 0x00,
    //cbSeed
    0x00, 0x00, 0x00, 0x00,
    //p
    0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    //A
    0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC,
    //B
    0x5A, 0xC6, 0x35, 0xD8, 0xAA, 0x3A, 0x93, 0xE7,
    0xB3, 0xEB, 0xBD, 0x55, 0x76, 0x98, 0x86, 0xBC,
    0x65, 0x1D, 0x06, 0xB0, 0xCC, 0x53, 0xB0, 0xF6,
    0x3B, 0xCE, 0x3C, 0x3E, 0x27, 0xD2, 0x60, 0x4B,
    //x
    0x6B, 0x17, 0xD1, 0xF2, 0xE1, 0x2C, 0x42, 0x47,
    0xF8, 0xBC, 0xE6, 0xE5, 0x63, 0xA4, 0x40, 0xF2,
    0x77, 0x03, 0x7D, 0x81, 0x2D, 0xEB, 0x33, 0xA0,
    0xF4, 0xA1, 0x39, 0x45, 0xD8, 0x98, 0xC2, 0x96,
    //y
    0x4F, 0xE3, 0x42, 0xE2, 0xFE, 0x1A, 0x7F, 0x9B,
    0x8E, 0xE7, 0xEB, 0x4A, 0x7C, 0x0F, 0x9E, 0x16,
    0x2B, 0xCE, 0x33, 0x57, 0x6B, 0x31, 0x5E, 0xCE,
    0xCB, 0xB6, 0x40, 0x68, 0x37, 0xBF, 0x51, 0xF5,
    //q
    0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xBC, 0xE6, 0xFA, 0xAD, 0xA7, 0x17, 0x9E, 0x84,
    0xF3, 0xB9, 0xCA, 0xC2, 0xFC, 0x63, 0x25, 0x51,
    //h
    0x01
};

static const BYTE rgbNistP384[] = {
    //dwVersion
    0x01, 0x00, 0x00, 0x00,
    //dwCurveType
    0x01, 0x00, 0x00, 0x00,
    //dwCurveGenerationAlgId
    0x00, 0x00, 0x00, 0x00,
    //cbFieldLength
    0x30, 0x00, 0x00, 0x00,
    //cbSubgroupOrder
    0x30, 0x00, 0x00, 0x00,
    //cbCofactor
    0x01, 0x00, 0x00, 0x00,
    //cbSeed
    0x00, 0x00, 0x00, 0x00,
    //p
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE,
    0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF,
    //A
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE,
    0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFC,
    //B
    0xB3, 0x31, 0x2F, 0xA7, 0xE2, 0x3E, 0xE7, 0xE4,
    0x98, 0x8E, 0x05, 0x6B, 0xE3, 0xF8, 0x2D, 0x19,
    0x18, 0x1D, 0x9C, 0x6E, 0xFE, 0x81, 0x41, 0x12,
    0x03, 0x14, 0x08, 0x8F, 0x50, 0x13, 0x87, 0x5A,
    0xC6, 0x56, 0x39, 0x8D, 0x8A, 0x2E, 0xD1, 0x9D,
    0x2A, 0x85, 0xC8, 0xED, 0xD3, 0xEC, 0x2A, 0xEF,
    //x
    0xAA, 0x87, 0xCA, 0x22, 0xBE, 0x8B, 0x05, 0x37,
    0x8E, 0xB1, 0xC7, 0x1E, 0xF3, 0x20, 0xAD, 0x74,
    0x6E, 0x1D, 0x3B, 0x62, 0x8B, 0xA7, 0x9B, 0x98,
    0x59, 0xF7, 0x41, 0xE0, 0x82, 0x54, 0x2A, 0x38,
    0x55, 0x02, 0xF2, 0x5D, 0xBF, 0x55, 0x29, 0x6C,
    0x3A, 0x54, 0x5E, 0x38, 0x72, 0x76, 0x0A, 0xB7,
    //y
    0x36, 0x17, 0xDE, 0x4A, 0x96, 0x26, 0x2C, 0x6F,
    0x5D, 0x9E, 0x98, 0xBF, 0x92, 0x92, 0xDC, 0x29,
    0xF8, 0xF4, 0x1D, 0xBD, 0x28, 0x9A, 0x14, 0x7C,
    0xE9, 0xDA, 0x31, 0x13, 0xB5, 0xF0, 0xB8, 0xC0,
    0x0A, 0x60, 0xB1, 0xCE, 0x1D, 0x7E, 0x81, 0x9D,
    0x7A, 0x43, 0x1D, 0x7C, 0x90, 0xEA, 0x0E, 0x5F,
    //q
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xC7, 0x63, 0x4D, 0x81, 0xF4, 0x37, 0x2D, 0xDF,
    0x58, 0x1A, 0x0D, 0xB2, 0x48, 0xB0, 0xA7, 0x7A,
    0xEC, 0xEC, 0x19, 0x6A, 0xCC, 0xC5, 0x29, 0x73,
    //h
    0x01
};

static const BYTE rgbNistP521[] = {
    //dwVersion
    0x01, 0x00, 0x00, 0x00,
    //dwCurveType
    0x01, 0x00, 0x00, 0x00,
    //dwCurveGenerationAlgId
    0x00, 0x00, 0x00, 0x00,
    //cbFieldLength
    0x42, 0x00, 0x00, 0x00,
    //cbSubgroupOrder
    0x42, 0x00, 0x00, 0x00,
    //cbCofactor
    0x01, 0x00, 0x00, 0x00,
    //cbSeed
    0x00, 0x00, 0x00, 0x00,
    //p
    0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF,
    //A
    0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFC,
    //B
    0x00, 0x51, 0x95, 0x3E, 0xB9, 0x61, 0x8E, 0x1C,
    0x9A, 0x1F, 0x92, 0x9A, 0x21, 0xA0, 0xB6, 0x85,
    0x40, 0xEE, 0xA2, 0xDA, 0x72, 0x5B, 0x99, 0xB3,
    0x15, 0xF3, 0xB8, 0xB4, 0x89, 0x91, 0x8E, 0xF1,
    0x09, 0xE1, 0x56, 0x19, 0x39, 0x51, 0xEC, 0x7E,
    0x93, 0x7B, 0x16, 0x52, 0xC0, 0xBD, 0x3B, 0xB1,
    0xBF, 0x07, 0x35, 0x73, 0xDF, 0x88, 0x3D, 0x2C,
    0x34, 0xF1, 0xEF, 0x45, 0x1F, 0xD4, 0x6B, 0x50,
    0x3F, 0x00,
    //x
    0x00, 0xC6, 0x85, 0x8E, 0x06, 0xB7, 0x04, 0x04,
    0xE9, 0xCD, 0x9E, 0x3E, 0xCB, 0x66, 0x23, 0x95,
    0xB4, 0x42, 0x9C, 0x64, 0x81, 0x39, 0x05, 0x3F,
    0xB5, 0x21, 0xF8, 0x28, 0xAF, 0x60, 0x6B, 0x4D,
    0x3D, 0xBA, 0xA1, 0x4B, 0x5E, 0x77, 0xEF, 0xE7,
    0x59, 0x28, 0xFE, 0x1D, 0xC1, 0x27, 0xA2, 0xFF,
    0xA8, 0xDE, 0x33, 0x48, 0xB3, 0xC1, 0x85, 0x6A,
    0x42, 0x9B, 0xF9, 0x7E, 0x7E, 0x31, 0xC2, 0xE5,
    0xBD, 0x66,
    //y
    0x01, 0x18, 0x39, 0x29, 0x6A, 0x78, 0x9A, 0x3B,
    0xC0, 0x04, 0x5C, 0x8A, 0x5F, 0xB4, 0x2C, 0x7D,
    0x1B, 0xD9, 0x98, 0xF5, 0x44, 0x49, 0x57, 0x9B,
    0x44, 0x68, 0x17, 0xAF, 0xBD, 0x17, 0x27, 0x3E,
    0x66, 0x2C, 0x97, 0xEE, 0x72, 0x99, 0x5E, 0xF4,
    0x26, 0x40, 0xC5, 0x50, 0xB9, 0x01, 0x3F, 0xAD,
    0x07, 0x61, 0x35, 0x3C, 0x70, 0x86, 0xA2, 0x72,
    0xC2, 0x40, 0x88, 0xBE, 0x94, 0x76, 0x9F, 0xD1,
    0x66, 0x50,
    //q
    0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFA, 0x51, 0x86, 0x87, 0x83, 0xBF, 0x2F,
    0x96, 0x6B, 0x7F, 0xCC, 0x01, 0x48, 0xF7, 0x09,
    0xA5, 0xD0, 0x3B, 0xB5, 0xC9, 0xB8, 0x89, 0x9C,
    0x47, 0xAE, 0xBB, 0x6F, 0xB7, 0x1E, 0x91, 0x38,
    0x64, 0x09,
    //h
    0x01
};

/*****************************************
*                                        *
*         TWISTED EDWARDS CURVES         *
*                                        *
******************************************/
static const BYTE rgbNumsP256t1[] = {
    //dwVersion
    0x01, 0x00, 0x00, 0x00,
    //dwCurveType
    0x02, 0x00, 0x00, 0x00,
    //dwCurveGenerationAlgId
    0x00, 0x00, 0x00, 0x00,
    //cbFieldLength
    0x20, 0x00, 0x00, 0x00,
    //cbSubgroupOrder
    0x20, 0x00, 0x00, 0x00,
    //cbCofactor
    0x01, 0x00, 0x00, 0x00,
    //cbSeed
    0x00, 0x00, 0x00, 0x00,
    //p
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x43,
    //A
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x42,
    //d
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3B, 0xEE,
    //x
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0D,
    //y
    0x7D, 0x0A, 0xB4, 0x1E, 0x2A, 0x12, 0x76, 0xDB,
    0xA3, 0xD3, 0x30, 0xB3, 0x9F, 0xA0, 0x46, 0xBF,
    0xBE, 0x2A, 0x6D, 0x63, 0x82, 0x4D, 0x30, 0x3F,
    0x70, 0x7F, 0x6F, 0xB5, 0x33, 0x1C, 0xAD, 0xBA,
    //q
    0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xBE, 0x6A, 0xA5, 0x5A, 0xD0, 0xA6, 0xBC, 0x64,
    0xE5, 0xB8, 0x4E, 0x6F, 0x11, 0x22, 0xB4, 0xAD,
    //h
    0x04
};

static const BYTE rgbNumsP384t1[] = {
    //dwVersion
    0x01, 0x00, 0x00, 0x00,
    //dwCurveType
    0x02, 0x00, 0x00, 0x00,
    //dwCurveGenerationAlgId
    0x00, 0x00, 0x00, 0x00,
    //cbFieldLength
    0x30, 0x00, 0x00, 0x00,
    //cbSubgroupOrder
    0x30, 0x00, 0x00, 0x00,
    //cbCofactor
    0x01, 0x00, 0x00, 0x00,
    //cbSeed
    0x00, 0x00, 0x00, 0x00,
    //p
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xC3,
    //A
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xC2,
    //d
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x15, 0x8A,
    //x
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08,
    //y
    0x74, 0x9C, 0xDA, 0xBA, 0x13, 0x6C, 0xE9, 0xB6,
    0x5B, 0xD4, 0x47, 0x17, 0x94, 0xAA, 0x61, 0x9D,
    0xAA, 0x5C, 0x7B, 0x4C, 0x93, 0x0B, 0xFF, 0x8E,
    0xBD, 0x79, 0x8A, 0x8A, 0xE7, 0x53, 0xC6, 0xD7,
    0x2F, 0x00, 0x38, 0x60, 0xFE, 0xBA, 0xBA, 0xD5,
    0x34, 0xA4, 0xAC, 0xF5, 0xFA, 0x7F, 0x5B, 0xEE,
    //q
    0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xEC, 0xD7, 0xD1, 0x1E, 0xD5, 0xA2, 0x59, 0xA2,
    0x5A, 0x13, 0xA0, 0x45, 0x8E, 0x39, 0xF4, 0xE4,
    0x51, 0xD6, 0xD7, 0x1F, 0x70, 0x42, 0x6E, 0x25,
    //h
    0x04
};

static const BYTE rgbNumsP512t1[] = {
    //dwVersion
    0x01, 0x00, 0x00, 0x00,
    //dwCurveType
    0x02, 0x00, 0x00, 0x00,
    //dwCurveGenerationAlgId
    0x00, 0x00, 0x00, 0x00,
    //cbFieldLength
    0x40, 0x00, 0x00, 0x00,
    //cbSubgroupOrder
    0x40, 0x00, 0x00, 0x00,
    //cbCofactor
    0x01, 0x00, 0x00, 0x00,
    //cbSeed
    0x00, 0x00, 0x00, 0x00,
    //p
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD, 0xC7,
    //A
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD, 0xC6,
    //d
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0xBA, 0xA8,
    //x
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20,
    //y
    0x7D, 0x67, 0xE8, 0x41, 0xDC, 0x4C, 0x46, 0x7B,
    0x60, 0x50, 0x91, 0xD8, 0x08, 0x69, 0x21, 0x2F,
    0x9C, 0xEB, 0x12, 0x4B, 0xF7, 0x26, 0x97, 0x3F,
    0x9F, 0xF0, 0x48, 0x77, 0x9E, 0x1D, 0x61, 0x4E,
    0x62, 0xAE, 0x2E, 0xCE, 0x50, 0x57, 0xB5, 0xDA,
    0xD9, 0x6B, 0x7A, 0x89, 0x7C, 0x1D, 0x72, 0x79,
    0x92, 0x61, 0x13, 0x46, 0x38, 0x75, 0x0F, 0x4F,
    0x0C, 0xB9, 0x10, 0x27, 0x54, 0x3B, 0x1C, 0x5E,
    //q
    0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xA7, 0xE5, 0x08, 0x09, 0xEF, 0xDA, 0xBB, 0xB9,
    0xA6, 0x24, 0x78, 0x4F, 0x44, 0x95, 0x45, 0xF0,
    0xDC, 0xEA, 0x5F, 0xF0, 0xCB, 0x80, 0x0F, 0x89,
    0x4E, 0x78, 0xD1, 0xCB, 0x0B, 0x5F, 0x01, 0x89,
    //h
    0x04
};


/************************************
*                                   *
*         MONTGOMERY CURVES         *
*                                   *
*************************************/

static const BYTE rgbCurve25519[] = {
    //dwVersion
    0x02, 0x00, 0x00, 0x00,
    //dwCurveType
    0x03, 0x00, 0x00, 0x00,
    //dwCurveGenerationAlgId
    0x00, 0x00, 0x00, 0x00,
    //cbFieldLength
    0x20, 0x00, 0x00, 0x00,
    //cbSubgroupOrder
    0x20, 0x00, 0x00, 0x00,
    //cbCofactor
    0x01, 0x00, 0x00, 0x00,
    //cbSeed
    0x00, 0x00, 0x00, 0x00,
    //p
    0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xED,
    //A
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x6D, 0x06,
    //B
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    //x
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09,
    //y
    0x20, 0xAE, 0x19, 0xA1, 0xB8, 0xA0, 0x86, 0xB4,
    0xE0, 0x1E, 0xDD, 0x2C, 0x77, 0x48, 0xD1, 0x4C,
    0x92, 0x3D, 0x4D, 0x7E, 0x6D, 0x7C, 0x61, 0xB2,
    0x29, 0xE9, 0xC5, 0xA2, 0x7E, 0xCE, 0xD3, 0xD9,
    //q
    0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x14, 0xDE, 0xF9, 0xDE, 0xA2, 0xF7, 0x9C, 0xD6,
    0x58, 0x12, 0x63, 0x1A, 0x5C, 0xF5, 0xD3, 0xED,
    //h
    0x08,

    // Version 2 parameters
    // PrivateKeyDefaultFormat
    0x03, 0x00, 0x00, 0x00,
    // HighBitRestrictionNumOfBits
    0x02, 0x00, 0x00, 0x00,
    // HighBitRestrictionPosition
    0xFE, 0x00, 0x00, 0x00,
    // HighBitRestrictionValue
    0x01, 0x00, 0x00, 0x00,
};

#endif  // 1

// Version 2 parameter extension
static const SYMCRYPT_ECURVE_PARAMS_V2_EXTENSION paramsV2ExtensionShortWeierstrass =
{
    SYMCRYPT_ECKEY_PRIVATE_FORMAT_CANONICAL,
    0,
    0,
    0,
};

static const SYMCRYPT_ECURVE_PARAMS_V2_EXTENSION paramsV2ExtensionTwistedEdwards =
{
    SYMCRYPT_ECKEY_PRIVATE_FORMAT_DIVH,
    0,
    0,
    0,
};

static const SYMCRYPT_ECURVE_PARAMS_V2_EXTENSION paramsV2ExtensionMontgomery =
{
    SYMCRYPT_ECKEY_PRIVATE_FORMAT_DIVH_TIMESH,
    0,
    0,
    0,
};

// Definitions
const PCSYMCRYPT_ECURVE_PARAMS SymCryptEcurveParamsNistP192 = (PCSYMCRYPT_ECURVE_PARAMS) rgbNistP192;
const PCSYMCRYPT_ECURVE_PARAMS SymCryptEcurveParamsNistP224 = (PCSYMCRYPT_ECURVE_PARAMS) rgbNistP224;
const PCSYMCRYPT_ECURVE_PARAMS SymCryptEcurveParamsNistP256 = (PCSYMCRYPT_ECURVE_PARAMS) rgbNistP256;
const PCSYMCRYPT_ECURVE_PARAMS SymCryptEcurveParamsNistP384 = (PCSYMCRYPT_ECURVE_PARAMS) rgbNistP384;
const PCSYMCRYPT_ECURVE_PARAMS SymCryptEcurveParamsNistP521 = (PCSYMCRYPT_ECURVE_PARAMS) rgbNistP521;

const PCSYMCRYPT_ECURVE_PARAMS SymCryptEcurveParamsNumsP256t1 = (PCSYMCRYPT_ECURVE_PARAMS) rgbNumsP256t1;
const PCSYMCRYPT_ECURVE_PARAMS SymCryptEcurveParamsNumsP384t1 = (PCSYMCRYPT_ECURVE_PARAMS) rgbNumsP384t1;
const PCSYMCRYPT_ECURVE_PARAMS SymCryptEcurveParamsNumsP512t1 = (PCSYMCRYPT_ECURVE_PARAMS) rgbNumsP512t1;

const PCSYMCRYPT_ECURVE_PARAMS SymCryptEcurveParamsCurve25519 = (PCSYMCRYPT_ECURVE_PARAMS) rgbCurve25519;

const PCSYMCRYPT_ECURVE_PARAMS_V2_EXTENSION SymCryptEcurveParamsV2ExtensionShortWeierstrass = &paramsV2ExtensionShortWeierstrass;
const PCSYMCRYPT_ECURVE_PARAMS_V2_EXTENSION SymCryptEcurveParamsV2ExtensionTwistedEdwards = &paramsV2ExtensionTwistedEdwards;
const PCSYMCRYPT_ECURVE_PARAMS_V2_EXTENSION SymCryptEcurveParamsV2ExtensionMontgomery = &paramsV2ExtensionMontgomery;