/* Entry 0x088C38A0 | file offset 0x000C0878 | FUN_088c38a0 | bytes 72 */

bool FUN_088c38a0(uint *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_088b90c4(param_2 + 0xe788,*param_3);
  *param_1 = (uint)(iVar1 != 0);
  param_1[1] = 1;
  return (iVar1 != 0) != 0;
}

