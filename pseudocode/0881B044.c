/* Entry 0x0881B044 | file offset 0x0001801C | FUN_0881b044 | bytes 460 */

undefined4 FUN_0881b044(undefined1 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  
  FUN_0881aff4();
  uVar1 = FUN_08899300();
  iVar2 = FUN_088988b4(uVar1);
  *(int *)(param_1 + 4) = iVar2;
  if (iVar2 != 0) {
    iVar2 = FUN_08842100(iVar2 << 6);
    *(int *)(param_1 + 8) = iVar2;
    if (iVar2 == 0) {
      return 0xfffffffe;
    }
    iVar2 = FUN_08842100(*(int *)(param_1 + 4) << 2);
    *(int *)(param_1 + 0xc) = iVar2;
    if (iVar2 == 0) {
      return 0xfffffffd;
    }
  }
  iVar2 = 0;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      *(undefined4 *)(*(int *)(param_1 + 8) + iVar3) = 0;
      *(undefined4 *)(*(int *)(param_1 + 8) + iVar3 + 8) = 0;
      *(undefined4 *)(*(int *)(param_1 + 8) + iVar3 + 0xc) = 0;
      iVar2 = iVar2 + 1;
      *(undefined4 *)(*(int *)(param_1 + 8) + iVar3 + 0x10) = 0;
      iVar3 = iVar3 + 0x40;
    } while (iVar2 < *(int *)(param_1 + 4));
  }
  uVar1 = DAT_089d4910;
  psVar4 = (short *)0x0;
  while (psVar4 = (short *)FUN_0881e610(uVar1,psVar4), psVar4 != (short *)0x0) {
    iVar2 = FUN_0881e780(uVar1,psVar4);
    if ((((iVar2 != 0) && (*(int *)(iVar2 + 8) == 1)) && (*(int *)(iVar2 + 4) != 0)) &&
       ((*(int *)(iVar2 + 4) != 3 && ((uint)(int)*psVar4 < *(uint *)(param_1 + 4))))) {
      *(undefined4 *)(*(int *)(param_1 + 8) + *psVar4 * 0x40) = 1;
      *(short **)(*(int *)(param_1 + 8) + *psVar4 * 0x40 + 4) = psVar4;
      *(int *)(*(int *)(param_1 + 8) + *psVar4 * 0x40 + 8) = iVar2;
    }
  }
  *param_1 = 1;
  return 0;
}

