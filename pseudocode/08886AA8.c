/* Entry 0x08886AA8 | file offset 0x00083A80 | FUN_08886aa8 | bytes 480 */

void FUN_08886aa8(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  puVar2 = param_1;
  do {
    func_0x08afcbcc(*puVar2,3);
    iVar1 = puVar2[2];
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 4) + 0x14))(iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x10),3);
    }
    func_0x08afcb44(puVar2[4]);
    iVar1 = puVar2[6];
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 4) + 0x14))(iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x10),3);
    }
    func_0x08afcb44(puVar2[8]);
    func_0x08afcb44(puVar2[10]);
    func_0x08afcb44(puVar2[0xc]);
    func_0x08afcb44(puVar2[0xe]);
    func_0x08afcb44(puVar2[0x10]);
    func_0x08afcb44(puVar2[0x12]);
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar3 < 2);
  FUN_08935828(param_1,0,8);
  FUN_08935828(param_1 + 2,0,8);
  FUN_08935828(param_1 + 4,0,8);
  FUN_08935828(param_1 + 6,0,8);
  FUN_08935828(param_1 + 8,0,8);
  FUN_08935828(param_1 + 10,0,8);
  FUN_08935828(param_1 + 0xc,0,8);
  FUN_08935828(param_1 + 0xe,0,8);
  FUN_08935828(param_1 + 0x10,0,8);
  FUN_08935828(param_1 + 0x12,0,8);
  if (param_1[0x14] != 0) {
    FUN_08890970();
    param_1[0x14] = 0;
  }
  if (param_1[0x15] != 0) {
    FUN_08890970();
    param_1[0x15] = 0;
  }
  func_0x08ae3948();
  func_0x08aecf28();
  func_0x08aecb90();
  func_0x08adcac4();
  func_0x08aee11c();
  FUN_0888f984(param_1 + 0x1d);
  param_1[0x2d] = 0;
  return;
}

