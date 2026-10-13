/* Entry 0x089BBD54 | file offset 0x001B8D2C | FUN_089bbd54 | bytes 204 */

undefined4 FUN_089bbd54(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  if ((param_1 != 0) && (param_4 != 0)) {
    iVar1 = FUN_089bb67c();
    if ((iVar1 != 0) && (FUN_089bb5cc(param_2,param_4), 0 < param_2)) {
      iVar1 = 0;
      do {
        iVar1 = iVar1 + 1;
        FUN_089bbc88(0,param_1,param_3,param_4);
        param_1 = param_1 + 0x40;
      } while (param_2 != iVar1);
    }
    return 1;
  }
  return 0;
}

