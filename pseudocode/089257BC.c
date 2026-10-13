/* Entry 0x089257BC | file offset 0x00122794 | FUN_089257bc | bytes 356 */

/* WARNING: Removing unreachable block (ram,0x08925860) */
/* WARNING: Removing unreachable block (ram,0x08925808) */
/* WARNING: Removing unreachable block (ram,0x089258b8) */

uint FUN_089257bc(undefined4 param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = ((float)param_3 + 100.0) / 100.0;
  fVar5 = (float)(param_2 & 0xff) * fVar4;
  if (fVar5 < 2.1474836e+09) {
    uVar3 = (uint)fVar5;
  }
  else {
    uVar3 = (int)(fVar5 - 2.1474836e+09) + 0x80000000;
  }
  if (0xff < uVar3) {
    uVar3 = 0xff;
  }
  fVar5 = (float)(param_2 >> 8 & 0xff) * fVar4;
  if (fVar5 < 2.1474836e+09) {
    uVar2 = (uint)fVar5;
  }
  else {
    uVar2 = (int)(fVar5 - 2.1474836e+09) + 0x80000000;
  }
  if (0xff < uVar2) {
    uVar2 = 0xff;
  }
  fVar4 = (float)(param_2 >> 0x10 & 0xff) * fVar4;
  if (fVar4 < 2.1474836e+09) {
    uVar1 = (uint)fVar4;
  }
  else {
    uVar1 = (int)(fVar4 - 2.1474836e+09) + 0x80000000;
  }
  if (0xff < uVar1) {
    uVar1 = 0xff;
  }
  return uVar2 << 8 | uVar3 | param_2 & 0xff000000 | uVar1 << 0x10;
}

