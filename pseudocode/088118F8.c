/* Entry 0x088118F8 | file offset 0x0000E8D0 | FUN_088118f8 | bytes 184 */

void FUN_088118f8(int *param_1)

{
  int iVar1;
  
  if (param_1[1] != 0) {
    iVar1 = FUN_088374b0(*param_1);
    if (iVar1 == 0) {
      FUN_0882fa10(0x41000000,0,*param_1 + 0x130,1,0);
    }
    else {
      FUN_0882fa10(0x41000000,0,*param_1 + 0x130,0x65,0);
      FUN_08834934(*param_1,0x65,0x66);
      FUN_08834948(*param_1);
    }
    FUN_088118b8(param_1);
  }
  return;
}

