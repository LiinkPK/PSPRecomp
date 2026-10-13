/* Entry 0x08847B64 | file offset 0x00044B3C | FUN_08847b64 | bytes 40 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089c8a24. Boundary still requires runtime validation. */

char FUN_08847b64(int param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = *(char **)(*(int *)(param_1 + 4) + 0x52c);
  cVar1 = pcVar2[1];
  if (cVar1 == '\0') {
    cVar1 = *pcVar2;
  }
  return cVar1;
}

