/* Entry 0x0894BE90 | file offset 0x00148E68 | FUN_0894be90 | bytes 336 */

undefined4 FUN_0894be90(int param_1,undefined1 *param_2,int param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  *param_2 = 0;
  iVar3 = 0;
  iVar4 = 0;
  if (*(short *)(param_2 + 4) != 0) {
    do {
      if (*(int *)(*(int *)(param_2 + 0x30) + iVar4) != 0) {
        FUN_089446f0(param_1,*(int *)(*(int *)(param_2 + 0x30) + iVar4),0);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar3 < (int)(uint)*(ushort *)(param_2 + 4));
  }
  if ((param_3 != 0) && (*(code **)(param_2 + 0x28) != (code *)0x0)) {
    (**(code **)(param_2 + 0x28))(param_2,*(undefined4 *)(param_2 + 0x2c));
  }
  iVar3 = *(int *)(param_2 + 0xc);
  if (param_2 == *(undefined1 **)(param_1 + 0x78)) {
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    iVar4 = *(int *)(param_1 + 0x80) + -1;
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0x7c) = 0;
      *(undefined4 *)(param_1 + 0x78) = 0;
    }
    else {
      *(int *)(param_1 + 0x78) = iVar3;
    }
  }
  else {
    iVar4 = *(int *)(param_2 + 8);
    if (iVar3 == 0) {
      *(undefined4 *)(iVar4 + 0xc) = 0;
      *(int *)(param_1 + 0x7c) = iVar4;
      iVar4 = *(int *)(param_1 + 0x80) + -1;
      uVar2 = *(undefined4 *)(param_1 + 0x18);
    }
    else {
      *(int *)(iVar4 + 0xc) = iVar3;
      *(int *)(iVar3 + 8) = iVar4;
      uVar2 = *(undefined4 *)(param_1 + 0x18);
      iVar4 = *(int *)(param_1 + 0x80) + -1;
    }
  }
  *(int *)(param_1 + 0x80) = iVar4;
  uVar1 = *(ushort *)(*(int *)(param_2 + 0x20) + 0x18);
  iVar3 = FUN_08971010(uVar2,param_2);
  param_1 = param_1 + (uint)uVar1 * 4;
  *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) - iVar3;
  return 1;
}

