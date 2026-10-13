/* Entry 0x08876634 | file offset 0x0007360C | FUN_08876634 | bytes 668 */

void FUN_08876634(float param_1,int param_2,char param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar1 = FUN_089a04e8();
  FUN_089a03dc(7);
  FUN_089a03dc(0);
  FUN_089a0384(4);
  FUN_089a12a4(0,2,3,0,0);
  FUN_089a03dc(10);
  FUN_089a03dc(9);
  param_2 = 2 - param_2;
  if (param_2 < 0) {
    param_2 = 0;
  }
  else if (2 < param_2) {
    param_2 = 2;
  }
  iVar2 = (&DAT_089c9c54)[param_2];
  iVar4 = (&DAT_089c9c48)[param_2];
  FUN_089a119c(1);
  FUN_089a0384(3);
  FUN_089a123c(1,0x80,0x80);
  FUN_089a1270(1,2,1);
  FUN_089a0c8c(0);
  FUN_089a11c0(0x7fff);
  FUN_089a2568();
  FUN_089a0cf8(0);
  iVar2 = iVar2 / 2;
  iVar3 = iVar4 * 6 + 0x89d6110;
  FUN_089a0520(5,0x100,iVar2,0,iVar3);
  FUN_089a0cf8(1);
  iVar4 = (iVar4 + iVar2) * 6 + 0x89d6110;
  FUN_089a0520(5,0x100,iVar2,0,iVar4);
  FUN_089a123c(3,0,0x80);
  FUN_089a1270(0,0,1);
  uVar5 = (uint)(param_1 * 255.0);
  if (0xff < (int)uVar5) {
    uVar5 = 0xff;
  }
  if ((int)uVar5 < 0) {
    uVar5 = 0;
  }
  if (param_3 == '\0') {
    FUN_089a0c8c(uVar5 << 8 | uVar5 | uVar5 << 0x10 | 0xff000000);
  }
  else {
    FUN_089a0c8c(uVar5 << 0x18 | 0xffffff);
  }
  FUN_089a11c0(0);
  FUN_089a0520(5,0x100,iVar2,0,iVar3);
  FUN_089a0cf8(0);
  FUN_089a0520(5,0x100,iVar2,0,iVar4);
  FUN_089a0cf8(1);
  FUN_089a119c(0);
  FUN_089a03dc(3);
  FUN_0899fdc4(uVar1);
  return;
}

