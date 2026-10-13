/* Entry 0x089BF408 | file offset 0x001BC3E0 | FUN_089bf408 | bytes 132 */

void FUN_089bf408(undefined4 *param_1,int param_2,undefined4 param_3)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)(*(int *)(param_2 + 0xc) + param_2);
  FUN_089be508(0,puVar1[2],puVar1[3],puVar1[4],puVar1[5],puVar1[7],puVar1[8],puVar1[0x15],
               puVar1[0x17],puVar1[0x14],puVar1[0x16],1,param_3,
               *(int *)(puVar1 + 0xc) - (uint)*puVar1,0,*param_1);
  return;
}

