/* Entry 0x088FC938 | file offset 0x000F9910 | FUN_088fc938 | bytes 248 */

void FUN_088fc938(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  
  param_1[0xc] = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    puVar3 = PTR_s_prologus_manual_param_bin_089d7f54;
    if (DAT_089d5f20 == '\0') {
      puVar3 = PTR_s_manual_param_bin_089d7f50;
    }
    iVar1 = FUN_08869ab4(param_2,puVar3);
    if (iVar1 != 0) {
      iVar2 = FUN_088820d8(*(int *)(iVar1 + 8) + (0x1c - *(short *)(*(int *)(iVar1 + 4) + 0x10)) * 8
                           + (0xcd - *(short *)(*(int *)(iVar1 + 4) + 0x12)) * 0x16);
      *param_1 = iVar2;
      FUN_08935524(iVar2,*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8));
      iVar1 = *param_1 + 0x18;
      param_1[1] = iVar1;
      param_1[2] = iVar1 + *(short *)(*param_1 + 0x10) * 8;
    }
  }
  return;
}

