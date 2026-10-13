/* Entry 0x0882EF10 | file offset 0x0002BEE8 | FUN_0882ef10 | bytes 452 */

void FUN_0882ef10(float param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  float fVar4;
  
  *(undefined4 *)(param_3 + 0x78) = param_2;
  *(undefined4 *)(param_3 + 0x74) = param_2;
  *(undefined4 *)(param_3 + 0x80) = param_2;
  *(undefined4 *)(param_3 + 0x7c) = param_2;
  *(float *)(param_3 + 0x84) = param_1;
  if (param_1 < 0.0) {
    *(undefined4 *)(param_3 + 0x84) = 0;
  }
  uVar3 = FUN_0882f4e4(param_3,param_4);
  *(undefined4 *)(param_3 + 0x70) = uVar3;
  uVar3 = FUN_0882f504(param_3,param_4);
  *(undefined4 *)(param_3 + 0x8c) = uVar3;
  iVar1 = *(int *)(param_3 + 0x30);
  if (((*(uint *)(param_3 + 0x58) & 2) == 0) && (param_1 == 0.0)) {
    fVar4 = (float)FUN_08838300();
    iVar1 = *(int *)(param_3 + 0x30);
    if (fVar4 < 2.0) {
      *(undefined4 *)(param_3 + 0x84) = 0x40000000;
    }
  }
  FUN_088473e8(iVar1 + 0x3e4);
  FUN_0886f0b4(*(undefined4 *)(param_3 + 0x84),*(undefined4 *)(param_3 + 0x78),param_3 + 0x34,
               param_4);
  FUN_0882f728(param_3,param_4);
  *(undefined4 *)(param_3 + 0x54) = 0;
  FUN_0882f17c(*(undefined4 *)(param_3 + 0x78),0xbf800000,param_3);
  FUN_08829848(param_3);
  FUN_0882f30c(*(undefined4 *)(param_3 + 0x78),param_3);
  FUN_0882f470(param_3);
  uVar2 = *(uint *)(param_3 + 0x54);
  *(uint *)(param_3 + 0x58) = *(uint *)(param_3 + 0x58) & 0xfffffffe;
  *(uint *)(param_3 + 0x54) = uVar2 | 1;
  *(uint *)(param_3 + 0x54) = uVar2 & 0xfffffffd | 1;
  if ((*(int *)(param_3 + 0x94) != 0) &&
     (iVar1 = FUN_08829344(*(int *)(param_3 + 0x94),param_3), iVar1 != 0)) {
    *(uint *)(param_3 + 0x54) = *(uint *)(param_3 + 0x54) | 0x10;
  }
  if ((*(uint *)(param_3 + 0x58) & 4) != 0) {
    *(uint *)(param_3 + 0x54) = *(uint *)(param_3 + 0x54) | 8;
  }
  *(undefined4 *)(param_3 + 0x170) = 0xbf800000;
  *(undefined4 *)(param_3 + 0x174) = 0xbf800000;
  return;
}

