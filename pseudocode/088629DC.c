/* Entry 0x088629DC | file offset 0x0005F9B4 | FUN_088629dc | bytes 192 */

undefined4
FUN_088629dc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined1 param_6)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_088630c8();
  uVar1 = FUN_08867984(param_1,0);
  iVar2 = FUN_08863174(uVar1,param_2,param_3,param_4,param_5,param_6);
  if (iVar2 == 0) {
    uVar1 = FUN_088715bc(*(undefined4 *)(DAT_089d5ea0 + 8),uVar1,param_2,param_3,param_4,param_5);
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

