#ifndef TYVIS_OROPERATOR_HH
#define TYVIS_OROPERATOR_HH

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

#include "TyvisLogicalOperators.hh"
#include "savant/IIRBase_OrOperator.hh"

class TyvisOrOperator : public virtual TyvisLogicalOperators, public virtual IIRBase_OrOperator {
public:
  const string &_get_cc_operator_name() const;
  void _publish_cc_ams_operator_name(published_file &);

protected:

protected:
  void _publish_cc_xvalue( published_file &_cc_out,
                           PublishData *declarations,
			   void (Tyvis::*_publish_function)( published_file &, PublishData * ));

private:

};
#endif