/* Entry 0x089AAF68 | file offset 0x001A7F40 | FUN_089aaf68 | bytes 160 */

int FUN_089aaf68(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_410 [1024];
  
  FUN_089ab210(auStack_410,&DAT_089daa68,0x400);
  FUN_089ab2b4(auStack_410,&DAT_089d0a04,0x400);
  FUN_089ab2b4(auStack_410,param_1,0x400);
  FUN_089ab2b4(auStack_410,&DAT_089d0a04,0x400);
  FUN_089ab2b4(auStack_410,"DUMMY_FL.DAT",0x400);
  iVar1 = FUN_089a5af4(auStack_410);
  if ((iVar1 < 0) && (iVar1 != -1)) {
    iVar1 = 0;
  }
  return iVar1;
}

