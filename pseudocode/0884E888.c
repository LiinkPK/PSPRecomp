/* Entry 0x0884E888 | file offset 0x0004B860 | FUN_0884e888 | bytes 216 */

undefined4 FUN_0884e888(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x24) == param_2[2]) {
    if (*(int *)(param_1 + 0x34) == 0) {
      if ((*(uint *)(param_1 + 0x44) & 1 << (param_2[3] & 0x1fU)) == 0) {
        uVar1 = 0;
      }
      else {
        iVar2 = param_2[1];
        if (iVar2 == 0) {
          iVar2 = *param_2;
          iVar3 = *(int *)(iVar2 + 0x4f4);
        }
        else {
          iVar3 = *(int *)(iVar2 + 0x4f4);
        }
        uVar1 = (**(code **)(iVar3 + 0x2c))
                          (iVar2 + 0x4c8 + (int)*(short *)(iVar3 + 0x28),param_1 + 0xa8);
        iVar2 = FUN_0886cc38(*(undefined4 *)(iVar2 + 0x394),uVar1);
        if (iVar2 == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = 1;
        }
      }
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

