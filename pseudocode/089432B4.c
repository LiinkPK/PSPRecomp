/* Entry 0x089432B4 | file offset 0x0014028C | FUN_089432b4 | bytes 408 */

undefined4 FUN_089432b4(int param_1,char *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (*param_2 == 'f') {
    *param_2 = '\0';
    iVar5 = *(int *)(param_2 + 0x18);
    iVar6 = *(int *)(param_1 + 0x78);
    while (iVar3 = iVar6, iVar3 != 0) {
      iVar6 = *(int *)(iVar3 + 0xc);
      if (*(int *)(iVar3 + 0x20) == iVar5) {
        FUN_0894be90(param_1,iVar3,1);
      }
    }
    iVar6 = *(int *)(param_1 + 0x68);
    while (iVar3 = iVar6, iVar3 != 0) {
      iVar6 = *(int *)(iVar3 + 0x154);
      if (*(int *)(iVar3 + 0x1c8) == iVar5) {
        FUN_089446f0(param_1,iVar3,1);
      }
    }
    iVar6 = *(int *)(param_2 + 0x20);
    if (param_2 == *(char **)(param_1 + 0x5c)) {
      if (iVar6 == 0) {
        *(undefined4 *)(param_1 + 0x60) = 0;
        *(undefined4 *)(param_1 + 0x5c) = 0;
        uVar2 = *(undefined4 *)(param_2 + 0x18);
      }
      else {
        *(int *)(param_1 + 0x5c) = iVar6;
        uVar2 = *(undefined4 *)(param_2 + 0x18);
      }
    }
    else {
      iVar3 = *(int *)(param_2 + 0x1c);
      if (iVar6 == 0) {
        *(undefined4 *)(iVar3 + 0x20) = 0;
        *(int *)(param_1 + 0x60) = iVar3;
        uVar2 = *(undefined4 *)(param_2 + 0x18);
      }
      else {
        *(int *)(iVar3 + 0x20) = iVar6;
        *(int *)(iVar6 + 0x1c) = iVar3;
        uVar2 = *(undefined4 *)(param_2 + 0x18);
      }
    }
    FUN_08947388(param_1,uVar2);
    FUN_08947540(param_1,*(undefined4 *)(param_2 + 0x18));
    FUN_089471d0(param_1,*(undefined4 *)(param_2 + 0x18));
    FUN_089476f8(param_1,*(undefined4 *)(param_2 + 0x18));
    uVar1 = *(ushort *)(*(int *)(param_2 + 0x18) + 0x18);
    iVar6 = FUN_08971010(*(undefined4 *)(param_1 + 0x18),param_2);
    iVar3 = param_1 + (uint)uVar1 * 4;
    iVar4 = *(int *)(param_1 + 100);
    *(int *)(iVar3 + 0xb4) = *(int *)(iVar3 + 0xb4) - iVar6;
    *(int *)(param_1 + 100) = iVar4 + -1;
    FUN_08943c98(param_1,iVar5);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

