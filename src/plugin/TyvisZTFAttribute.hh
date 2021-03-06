#ifndef TYVIS_ZTFATTRIBUTE_HH
#define TYVIS_ZTFATTRIBUTE_HH

// Copyright (c) 1996-2003 The University of Cincinnati.
// All rights reserved.

// UC MAKES NO REPRESENTATIONS OR WARRANTIES ABOUT THE SUITABILITY OF THE
// SOFTWARE, EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
// IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE,
// OR NON-INFRINGEMENT.  UC SHALL NOT BE LIABLE FOR ANY DAMAGES SUFFERED BY
// LICENSEE AS A RESULT OF USING, RESULT OF USING, MODIFYING OR
// DISTRIBUTING THIS SOFTWARE OR ITS DERIVATIVES.

// By using or copying this Software, Licensee agrees to abide by the
// intellectual property laws, and all other applicable laws of the U.S.,
// and the terms of this license.

// You may modify, distribute, and use the software contained in this
// package under the terms of the "GNU LIBRARY GENERAL PUBLIC LICENSE"
// version 2, June 1991. A copy of this license agreement can be found in
// the file "LGPL", distributed with this archive.

// Authors: Philip A. Wilsey    philip.wilsey@ieee.org
//          Dale E. Martin      dmartin@cliftonlabs.com

//---------------------------------------------------------------------------

#include "TyvisAttribute.hh"
#include "savant/IIRBase_ZTFAttribute.hh"

/** This class describes the 'ztf attribute. For a scalar quantity Q, the
    attribute Q'ztf(numerator, denominator, T, initial_delay) yields a
    quantity whose type is the base type of Q and value is the Z transform
    of Q.num and den are the numerator and denominator polynomials,
    specified as real_vector arrays.  The quantity Q is sampled at the time
    given by intial_delay and at intervals of T thereafter.  */
class TyvisZTFAttribute : public virtual TyvisAttribute, public virtual IIRBase_ZTFAttribute {
public:
  /** @name C++ publishing methods.

      These methods relate to the publishing of C++.
  */
  void _publish_cc( published_file &, PublishData *declarations );
  void _publish_cc_decl( published_file &, PublishData *declarations );
  /** Uses the index assigned to each quantity and publishes the 
      quantities present in the simultaneous statement. */
  void _publish_cc_ams_function(published_file &, PublishData *declarations);

  /** Resets index assigned to each quantity in the Simultaneous Equation. */
  void _flush_stmt_index();

  /** Returns the stored index value. */
  IIR_Int32 _get_stmt_qty_index();

  /** Sets an index to each quantity in the equation. */
  void _set_stmt_qty_index( IIR_Int32 *index,
			    savant::set<TyvisDeclaration> *quantity_set,
			    PublishData *declarations,
			    PublishData *arch_declarations);

  TyvisDeclaration *_build_implicit_declaration( TyvisTextLiteral *, TyvisTypeDefinition * );
  const string &_get_cc_attribute_name() const;

  // Helper Functions
  Tyvis      *_get_num();
  Tyvis      *_get_den();
  Tyvis      *_get_t();
  Tyvis      *_get_initial_delay();
protected:

private:

};
#endif
