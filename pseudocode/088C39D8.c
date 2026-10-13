/* Entry 0x088C39D8 | file offset 0x000C09B0 | FUN_088c39d8 | bytes 72 */

bool FUN_088c39d8(uint *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_088b90f8(param_2 + 0xe788,*param_3);
  *param_1 = (uint)(iVar1 != 0);
  param_1[1] = 1;
  return (iVar1 != 0) != 0;
}

