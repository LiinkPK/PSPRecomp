/* Entry 0x089446F0 | file offset 0x001416C8 | FUN_089446f0 | bytes 420 */

undefined4 FUN_089446f0(int param_1,char *param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  
  DAT_09b6f478 = param_1;
  if (*param_2 == 'l') {
    FUN_0894be90(param_1,param_2,param_3);
    uVar3 = 1;
  }
  else if (*param_2 == 'e') {
    *param_2 = '\0';
    uVar3 = *(undefined4 *)(param_1 + 0x88);
    *(char **)(param_1 + 0x88) = param_2;
    iVar4 = 0;
    pcVar5 = param_2;
    do {
      iVar2 = *(int *)(pcVar5 + 0x1b8);
      while (iVar2 != 0) {
        iVar6 = *(int *)(iVar2 + 0x14);
        FUN_0894c938(param_1,param_2,iVar2,1);
        iVar2 = iVar6;
      }
      iVar4 = iVar4 + 1;
      pcVar5 = pcVar5 + 4;
    } while (iVar4 < 2);
    *(undefined4 *)(param_1 + 0x88) = uVar3;
    iVar4 = *(int *)(param_2 + 0x154);
    if (param_2 == *(char **)(param_1 + 0x68)) {
      if (iVar4 == 0) {
        *(undefined4 *)(param_1 + 0x6c) = 0;
        *(undefined4 *)(param_1 + 0x68) = 0;
      }
      else {
        *(int *)(param_1 + 0x68) = iVar4;
      }
    }
    else {
      iVar2 = *(int *)(param_2 + 0x150);
      if (iVar4 == 0) {
        *(undefined4 *)(iVar2 + 0x154) = 0;
        *(int *)(param_1 + 0x6c) = iVar2;
      }
      else {
        *(int *)(iVar2 + 0x154) = iVar4;
        *(int *)(iVar4 + 0x150) = iVar2;
      }
    }
    if ((param_3 != 0) && (*(code **)(param_2 + 0x19c) != (code *)0x0)) {
      (**(code **)(param_2 + 0x19c))(param_2,*(undefined4 *)(param_2 + 0x1a0));
    }
    uVar1 = *(ushort *)(*(int *)(param_2 + 0x1c8) + 0x18);
    iVar4 = FUN_08971010(*(undefined4 *)(param_1 + 0x18),param_2);
    iVar2 = param_1 + (uint)uVar1 * 4;
    iVar6 = *(int *)(param_1 + 0x70);
    *(int *)(iVar2 + 0xb4) = *(int *)(iVar2 + 0xb4) - iVar4;
    *(int *)(param_1 + 0x70) = iVar6 + -1;
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

