/* Entry 0x089850A4 | file offset 0x0018207C | FUN_089850a4 | bytes 168 */

/* WARNING: Removing unreachable block (ram,0x08985108) */

void FUN_089850a4(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  
  iVar1 = FUN_08985234(param_3,param_1);
  uVar2 = *(ushort *)(iVar1 + 0x3e) / 2;
  if ((*(ushort *)(param_2 + 0x32) < uVar2) &&
     (fVar3 = *(float *)(param_2 + 0x34) -
              (1.0 / (float)uVar2) * *(float *)(*(int *)(DAT_09b6f478 + 0x88) + 0x160),
     *(float *)(param_2 + 0x34) = fVar3, fVar3 < 0.0)) {
    *(undefined4 *)(param_2 + 0x34) = 0;
  }
  return;
}

