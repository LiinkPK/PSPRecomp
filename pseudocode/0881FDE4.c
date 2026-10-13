/* Entry 0x0881FDE4 | file offset 0x0001CDBC | FUN_0881fde4 | bytes 148 */

float FUN_0881fde4(float param_1,float param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = FUN_0881baa8();
  piVar2 = (int *)FUN_0881ba98(uVar1);
  iVar3 = *piVar2 * 0x343fd + 0x269ec3;
  *piVar2 = iVar3;
  return (param_2 - param_1) * ((float)((iVar3 >> 0x10 & 0x7fffU) % 0x2711) / 10000.0) + param_1;
}

