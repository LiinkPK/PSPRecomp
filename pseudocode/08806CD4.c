/* Entry 0x08806CD4 | file offset 0x00003CAC | FUN_08806cd4 | bytes 228 */

void FUN_08806cd4(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  
  if ((*(float *)(param_1 + 0x5c) <= 0.0) && (*(char *)(param_1 + 0x66) != '\0')) {
    uVar1 = (uint)*(byte *)(param_1 + (uint)*(byte *)(param_1 + 0x65) + 0x1c);
    *(char *)(param_1 + 100) = (char)((int)uVar1 >> 5);
    iVar2 = *(int *)(param_1 + (uint)*(byte *)(param_1 + 100) * 4);
    *(float *)(param_1 + 0x5c) = (float)(uVar1 & 0x1f) * 2.0;
    if (iVar2 != 0) {
      FUN_088065b4(*(undefined4 *)(param_1 + 0x5c),param_2,iVar2,1);
    }
    *(char *)(param_1 + 0x65) = *(char *)(param_1 + 0x65) + '\x01';
    if (0x3f < *(byte *)(param_1 + 0x65)) {
      *(undefined1 *)(param_1 + 0x65) = 0;
    }
    *(char *)(param_1 + 0x66) = *(char *)(param_1 + 0x66) + -1;
  }
  fVar3 = (float)FUN_08838300(param_2);
  *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x5c) - fVar3;
  return;
}

