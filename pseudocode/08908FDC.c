/* Entry 0x08908FDC | file offset 0x00105FB4 | FUN_08908fdc | bytes 156 */

void FUN_08908fdc(int param_1,int param_2)

{
  int iVar1;
  short *psVar2;
  code *pcVar3;
  int aiStack_40 [13];
  
  FUN_08935524(aiStack_40,&DAT_089d8250,0x30);
  *(int *)(param_1 + 0x23c) = param_2;
  iVar1 = (int)*(short *)((int)aiStack_40 + (param_2 * 4 + 1) * 2);
  pcVar3 = (code *)aiStack_40[param_2 * 2 + 1];
  if (((iVar1 != 0) || ((short)aiStack_40[param_2 * 2] != 0)) || (pcVar3 != (code *)0x0)) {
    param_1 = param_1 + (short)aiStack_40[param_2 * 2];
    if (iVar1 != 0) {
      psVar2 = (short *)(*(int *)(pcVar3 + param_1) + iVar1 * 8);
      pcVar3 = *(code **)(psVar2 + 2);
      param_1 = param_1 + *psVar2;
    }
    (*pcVar3)(param_1);
  }
  return;
}

