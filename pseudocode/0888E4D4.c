/* Entry 0x0888E4D4 | file offset 0x0008B4AC | FUN_0888e4d4 | bytes 252 */

undefined4 FUN_0888e4d4(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_089d6a90 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_088a0cf8(DAT_089d6a90);
    iVar2 = FUN_08869954(&DAT_09b491e0,uVar1);
    uVar1 = DAT_089d6c80;
    if (iVar2 == 1) {
      FUN_08896854(DAT_089d6af0,param_1,&DAT_09b491e0);
      FUN_08895e3c(DAT_089d6ae8,param_1,&DAT_09b491e0);
      iVar2 = FUN_08869ab4(&DAT_09b491e0,"snd_battle.scd");
      if ((iVar2 != 0) && (*(int *)(iVar2 + 8) != 0)) {
        DAT_089d6a94 = FUN_088a0dbc(uVar1,"snd_battle.scd",*(undefined4 *)(iVar2 + 4),
                                    *(undefined4 *)(iVar2 + 8),0);
      }
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

