/* Entry 0x08983DB4 | file offset 0x00180D8C | FUN_08983db4 | bytes 60 */

undefined4 FUN_08983db4(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  
  if (param_1 == param_2) {
    uVar1 = 0;
  }
  else if (param_1 == param_3) {
    uVar1 = 1;
  }
  else if (param_1 == param_4) {
    uVar1 = 2;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

