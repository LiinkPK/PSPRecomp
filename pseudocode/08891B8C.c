/* Entry 0x08891B8C | file offset 0x0008EB64 | FUN_08891b8c | bytes 140 */

bool FUN_08891b8c(undefined4 param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined1 auStack_b0 [12];
  undefined2 local_a4;
  undefined1 auStack_58 [44];
  short local_2c;
  
  if (param_3 < 0) {
    bVar1 = false;
  }
  else {
    iVar2 = FUN_08891c18(param_1,auStack_b0,param_3);
    if (iVar2 == 0) {
      iVar2 = FUN_08891ca4(param_1,auStack_58,param_2,local_a4);
      if (iVar2 == 0) {
        bVar1 = local_2c == 6;
      }
      else {
        bVar1 = false;
      }
    }
    else {
      bVar1 = false;
    }
  }
  return bVar1;
}

