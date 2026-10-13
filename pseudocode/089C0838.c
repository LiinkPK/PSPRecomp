/* Entry 0x089C0838 | file offset 0x001BD810 | FUN_089c0838 | bytes 368 */

undefined4
FUN_089c0838(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uStack_40;
  char local_3f;
  undefined2 local_3a;
  undefined2 local_32;
  undefined2 local_30;
  undefined1 local_2e;
  
  if ((param_1 != 0) && (param_5 != 0)) {
    iVar1 = FUN_089c00d8(param_2,param_3);
    if (iVar1 != 0) {
      FUN_089c030c(param_2,&uStack_40);
      if (local_3f != '\0') {
        FUN_089bb5f8(1,param_5);
        FUN_089be508(0,3,0,local_3a,1,0x10,1,1,1,2,3,1,0x10,0,0,param_5);
      }
      uVar2 = FUN_089c0104(local_2e);
      FUN_089bb59c(1,param_5);
      FUN_089be508(0,uVar2,0,local_32,local_30,0x10,1,1,1,1,3,1,0x80,0,0,param_5);
      return 1;
    }
  }
  return 0;
}

