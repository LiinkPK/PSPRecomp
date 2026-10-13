/* Entry 0x088983C8 | file offset 0x000953A0 | FUN_088983c8 | bytes 156 */

void FUN_088983c8(int param_1,int param_2,ushort param_3)

{
  bool bVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x70) == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = false;
    if ((-1 < param_2) && (bVar1 = false, param_2 < *(int *)(*(int *)(param_1 + 0x58) + 0x14))) {
      bVar1 = true;
    }
  }
  if (bVar1) {
    iVar2 = *(int *)(param_1 + 0x70) + param_2 * 0x4c;
    *(ushort *)(iVar2 + 0x24) = *(ushort *)(iVar2 + 0x24) & 0xfffd | (param_3 & 1) << 1;
    if (-1 < *(short *)(iVar2 + 0x22)) {
      FUN_08893938(DAT_089d6ac8,(int)*(short *)(iVar2 + 0x22));
    }
  }
  return;
}

