#pragma once

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;
using namespace System::Collections;

// Implements the manual sorting of items by columns.
ref class ListViewItemComparer: public IComparer
{
private:
   int col;

public:
   ListViewItemComparer()
   {
      col = 0;
   }

   ListViewItemComparer( int column )
   {
      col = column;
   }

   virtual int Compare( Object^ x, Object^ y )
   {
      return String::Compare( (dynamic_cast<ListViewItem^>(x))->SubItems[ col ]->Text,
                              (dynamic_cast<ListViewItem^>(y))->SubItems[ col ]->Text );
   }
};
