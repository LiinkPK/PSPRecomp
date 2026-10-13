/* Entry 0x0888E3AC | file offset 0x0008B384 | FUN_0888e3ac | bytes 244 */

void FUN_0888e3ac(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_110 [256];
  int local_10;
  int local_c;
  
  if (param_2 == 0) {
    FUN_0893476c(auStack_110,"sound/map_se_%s-msnd.mpk",param_1);
    local_c = FUN_08862c40(auStack_110,1);
    if (local_c != 0) {
      DAT_089d6a90 = FUN_088a0cb0(local_c,auStack_110);
      if (DAT_089d6a90 != 0) {
        uVar1 = FUN_088a0cf8(DAT_089d6a90);
        FUN_08862854(auStack_110,uVar1,local_c,1);
        FUN_088a0d1c(DAT_089d6a90);
      }
    }
  }
  else {
    local_10 = param_2;
    local_c = param_3;
    DAT_089d6a90 = FUN_088a0cb0(param_3,"sound/map_se_%s-msnd.mpk");
    if (DAT_089d6a90 != 0) {
      uVar1 = FUN_088a0cf8(DAT_089d6a90);
      FUN_08935524(uVar1,local_10,local_c);
      FUN_088a0d1c(DAT_089d6a90);
    }
  }
  return;
}

