/* Entry 0x08908C38 | file offset 0x00105C10 | FUN_08908c38 | bytes 152 */

void FUN_08908c38(int param_1)

{
  int iVar1;
  code *pcVar2;
  short *psVar3;
  int iVar4;
  int aiStack_40 [13];
  
  FUN_08935524(aiStack_40,&DAT_089d8220,0x30);
  iVar1 = *(int *)(param_1 + 0x23c);
  iVar4 = (int)*(short *)((int)aiStack_40 + (iVar1 * 4 + 1) * 2);
  pcVar2 = (code *)aiStack_40[iVar1 * 2 + 1];
  if (((iVar4 != 0) || ((short)aiStack_40[iVar1 * 2] != 0)) || (pcVar2 != (code *)0x0)) {
    param_1 = param_1 + (short)aiStack_40[iVar1 * 2];
    if (iVar4 != 0) {
      psVar3 = (short *)(*(int *)(pcVar2 + param_1) + iVar4 * 8);
      pcVar2 = *(code **)(psVar3 + 2);
      param_1 = param_1 + *psVar3;
    }
    (*pcVar2)(param_1);
  }
  return;
}

