/* Entry 0x08913578 | file offset 0x00110550 | FUN_08913578 | bytes 188 */

void FUN_08913578(int param_1)

{
  int iVar1;
  code *pcVar2;
  short *psVar3;
  int iVar4;
  int aiStack_c0 [45];
  
  FUN_08935524(aiStack_c0,&DAT_089d8408,0xb0);
  iVar1 = *(int *)(param_1 + 0x68);
  iVar4 = (int)*(short *)((int)aiStack_c0 + (iVar1 * 4 + 1) * 2);
  pcVar2 = (code *)aiStack_c0[iVar1 * 2 + 1];
  iVar1 = param_1 + (short)aiStack_c0[iVar1 * 2];
  if (iVar4 != 0) {
    psVar3 = (short *)(*(int *)(pcVar2 + iVar1) + iVar4 * 8);
    pcVar2 = *(code **)(psVar3 + 2);
    iVar1 = iVar1 + *psVar3;
  }
  (*pcVar2)(iVar1);
  *(undefined1 *)(DAT_089d6ac8 + 0x6b2) = 1;
  FUN_08918bd4(param_1);
  FUN_08911440(DAT_089d83a8);
  *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x6c) + *(float *)(DAT_089d69e0 + 0x18);
  return;
}

