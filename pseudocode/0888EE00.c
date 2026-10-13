/* Entry 0x0888EE00 | file offset 0x0008BDD8 | FUN_0888ee00 | bytes 336 */

void FUN_0888ee00(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int local_60 [2];
  undefined1 local_57;
  
  piVar2 = (int *)(param_1 + 4);
  iVar3 = 0;
  do {
    if ((char)piVar2[5] == '\x01') {
      local_70 = 0;
      local_6c = 0x3f800000;
      local_68 = 0;
      local_64 = 0;
      FUN_08808468(0,0x70a,*piVar2,&local_70,1);
      iVar1 = FUN_088a9de8(*DAT_089d6dd0,0xc,0,0,0);
      piVar2[1] = iVar1;
      if (iVar1 != 0) {
        FUN_088a6a38(0xbf800000,iVar1,2,*piVar2 + 0x4c8,0xffffffff,0xffffffff);
      }
      func_0x089eb798(local_60);
      local_60[1] = 0x4c;
      local_57 = 1;
      local_60[0] = iVar3;
      FUN_0888ace4(local_60);
      func_0x089eb7d0(local_60,2);
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 6;
  } while (iVar3 < 2);
  return;
}

