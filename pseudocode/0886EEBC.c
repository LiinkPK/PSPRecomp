/* Entry 0x0886EEBC | file offset 0x0006BE94 | FUN_0886eebc | bytes 216 */

int FUN_0886eebc(undefined4 param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_130 [256];
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_20;
  
  FUN_08863048(auStack_130,param_2);
  FUN_08935828(&local_30,0,0x14);
  local_30 = 0x14;
  local_2c = 0;
  local_20 = param_3 == '\x01';
  do {
    iVar1 = sceKernelLoadModule(auStack_130,0,&local_30);
  } while (iVar1 < 1);
  if ((0 < iVar1) && (iVar2 = sceKernelStartModule(iVar1,0,0,0,0), iVar2 < 0)) {
    sceKernelUnloadModule(iVar1);
    iVar1 = 0;
  }
  return iVar1;
}

