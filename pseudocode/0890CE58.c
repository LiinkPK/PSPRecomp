/* Entry 0x0890CE58 | file offset 0x00109E30 | FUN_0890ce58 | bytes 568 */

uint FUN_0890ce58(undefined4 param_1,int param_2)

{
  uint extraout_v1;
  byte bVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  float local_30;
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 auStack_20 [16];
  
  uVar2 = *(uint *)(param_2 + 4);
  uVar4 = (uint)((uVar2 & 0x80) != 0);
  if ((uVar2 & 0x20) != 0) {
    uVar4 = uVar4 | 2;
  }
  if ((uVar2 & 0x10) != 0) {
    uVar4 = uVar4 | 4;
  }
  if ((uVar2 & 0x40) != 0) {
    uVar4 = uVar4 | 8;
  }
  if ((uVar2 & 0x2000) != 0) {
    uVar4 = uVar4 | 0x10;
  }
  if ((uVar2 & 0x4000) != 0) {
    uVar4 = uVar4 | 0x20;
  }
  if ((uVar2 & 0x8000) != 0) {
    uVar4 = uVar4 | 0x40;
  }
  if ((uVar2 & 0x1000) != 0) {
    uVar4 = uVar4 | 0x80;
  }
  if ((uVar2 & 0x100) != 0) {
    uVar4 = uVar4 | 0x100;
  }
  if ((uVar2 & 0x200) != 0) {
    uVar4 = uVar4 | 0x200;
  }
  if ((uVar2 & 8) != 0) {
    uVar4 = uVar4 | 0x400;
  }
  if ((uVar2 & 1) != 0) {
    uVar4 = uVar4 | 0x800;
  }
  bVar1 = 0x80;
  if ((uVar2 & 0x20000) == 0) {
    bVar1 = *(byte *)(param_2 + 8);
  }
  bVar3 = 0x80;
  if ((uVar2 & 0x20000) == 0) {
    bVar3 = *(byte *)(param_2 + 9);
  }
  local_30 = (float)bVar1;
  local_2c = (float)bVar3;
  local_28 = 0;
  local_24 = 0;
  FUN_08872138(auStack_20,&local_30);
  if ((extraout_v1 & 0x20) != 0) {
    uVar4 = uVar4 | 0x1000;
  }
  if ((extraout_v1 & 8) != 0) {
    uVar4 = uVar4 | 0x2000;
  }
  if ((extraout_v1 & 4) != 0) {
    uVar4 = uVar4 | 0x4000;
  }
  if ((extraout_v1 & 0x10) != 0) {
    uVar4 = uVar4 | 0x8000;
  }
  return uVar4;
}

