/* Entry 0x08911E80 | file offset 0x0010EE58 | FUN_08911e80 | bytes 228 */

void FUN_08911e80(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_a0 [128];
  
  FUN_08911f64();
  uVar2 = FUN_0887b500(param_2,param_3,param_4);
  FUN_089347e8(auStack_a0,L"%s Lv%d",uVar2,param_5);
  uVar2 = FUN_0887d868(DAT_089d6998,0,auStack_a0,0xffffffff,0,0,0,0);
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  iVar3 = 1;
  iVar1 = param_1;
  do {
    uVar2 = FUN_0887e534(*(undefined4 *)(param_1 + 0x14));
    *(undefined4 *)(iVar1 + 0x18) = uVar2;
    iVar3 = iVar3 + 1;
    iVar1 = iVar1 + 4;
  } while (iVar3 < 5);
  FUN_088d428c(param_1,param_1 + 0x14,&DAT_089ce200,1);
  return;
}

