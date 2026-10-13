/* Entry 0x088C3C18 | file offset 0x000C0BF0 | FUN_088c3c18 | bytes 56 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089d75d4. Boundary still requires runtime validation. */

bool FUN_088c3c18(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (uint)*(byte *)(DAT_089d712c + 0x1dee6) + (uint)*(byte *)(DAT_089d712c + 0x1dee4);
  *param_1 = iVar1;
  iVar2 = *param_3;
  param_1[1] = iVar2;
  return iVar2 <= iVar1;
}

