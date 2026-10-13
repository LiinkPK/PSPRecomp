/* Entry 0x089B5258 | file offset 0x001B2230 | FUN_089b5258 | bytes 308 */

void FUN_089b5258(int param_1,int param_2,undefined2 param_3,undefined2 param_4,int param_5,
                 int param_6,short param_7)

{
  int iVar1;
  short sVar2;
  
  sVar2 = (short)param_5;
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = param_2 * 0x30 + *(int *)(param_1 + 4);
    *(short *)(iVar1 + 0x1a) = param_7;
    *(undefined2 *)(iVar1 + 0x10) = 1;
    *(undefined2 *)(iVar1 + 0x14) = param_3;
    *(undefined2 *)(iVar1 + 0x16) = param_4;
    *(float *)(iVar1 + 0x1c) = (float)(param_5 * param_6);
    *(short *)(iVar1 + 0x18) = sVar2 * param_7;
    *(short *)(iVar1 + 0x12) = sVar2;
    return;
  }
  FUN_089b5044();
  iVar1 = param_2 * 0x30 + *(int *)(param_1 + 4);
  *(short *)(iVar1 + 0x1a) = param_7;
  *(undefined2 *)(iVar1 + 0x10) = 1;
  *(undefined2 *)(iVar1 + 0x14) = param_3;
  *(undefined2 *)(iVar1 + 0x16) = param_4;
  *(float *)(iVar1 + 0x1c) = (float)(param_5 * param_6);
  *(short *)(iVar1 + 0x18) = sVar2 * param_7;
  *(short *)(iVar1 + 0x12) = sVar2;
  return;
}

