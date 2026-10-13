/* Entry 0x088642A0 | file offset 0x00061278 | FUN_088642a0 | bytes 140 */

undefined4 FUN_088642a0(undefined4 param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  undefined1 auStack_70 [8];
  undefined4 local_68;
  
  do {
    FUN_08864b68(param_1,0);
    iVar1 = sceIoGetstat(param_2,auStack_70);
    if (iVar1 == 0) {
      return local_68;
    }
  } while (param_3 != '\x01');
  return 0;
}

