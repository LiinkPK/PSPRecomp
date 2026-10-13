/* Entry 0x088FE7C8 | file offset 0x000FB7A0 | FUN_088fe7c8 | bytes 136 */

undefined4 FUN_088fe7c8(undefined4 param_1,char param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_20 [4];
  undefined4 local_1c;
  
  uVar1 = FUN_08867984(param_1,0);
  if ((DAT_089d69dc == '\0') || (iVar2 = FUN_08883538(auStack_20,uVar1), iVar2 == 0)) {
    FUN_088838a8();
    if (param_2 == '\0') {
      local_1c = FUN_08862c40(uVar1,1);
    }
    else {
      local_1c = FUN_08862d30(uVar1);
    }
  }
  return local_1c;
}

