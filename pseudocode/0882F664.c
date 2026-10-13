/* Entry 0x0882F664 | file offset 0x0002C63C | FUN_0882f664 | bytes 108 */

uint FUN_0882f664(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_2 < 0) {
    param_2 = (int)*(short *)(param_1 + 0x50);
  }
  if (param_2 < 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar2 = FUN_0882fe28(param_1,param_2);
    iVar3 = FUN_08934944(uVar2,*(int *)(param_1 + 0x48) + 8,
                         *(undefined4 *)(*(int *)(param_1 + 0x48) + 4),8,&LAB_0882ef04);
    uVar1 = (uint)*(ushort *)(iVar3 + 2);
  }
  return uVar1;
}

