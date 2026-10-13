/* Entry 0x08915AFC | file offset 0x00112AD4 | FUN_08915afc | bytes 224 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08915afc(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *(int *)(param_1 + 0x71c) = (int)*(short *)(*(int *)(param_1 + 0x3c) + 2);
  FUN_08893c94(DAT_089d6ac8);
  func_0x08b53890(_DAT_08b54330);
  FUN_08893418(0,0,0x8b53830,1);
  FUN_088994c0(0);
  FUN_08892dcc(DAT_089d6ac8);
  FUN_08910a9c(param_1 + 0x7c);
  if (-1 < *(short *)(*(int *)(param_1 + 0x3c) + 4)) {
    FUN_08893534();
  }
  FUN_08899688();
  DAT_09afb89c = 0;
  FUN_088421ec();
  uVar1 = FUN_089110b4();
  FUN_0885a290(DAT_089d4dc8,uVar1);
  uVar1 = _DAT_08b54330;
  uVar2 = FUN_089110b4();
  func_0x08b532fc(uVar1,uVar2,0);
  return;
}

