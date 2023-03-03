//rewritten derived function pseudo2 address
void psuedo2(DWORD a1, int a2)
{
  int v3; // esi
  void *result; // eax
  unsigned int v5; // edx
  int v6; // esi
  int v7; // ecx
  int v8; // eax
  int v9; // ecx

  switch ( a2 )
  {
    case -10002:
      v9 = (unsigned int)(a1 + 6) ^ a1[6];
      *(_DWORD *)(v9 + 1536) = a1[14];
      *(_DWORD *)(v9 + 1548) = 7;
      result = (void *)(((unsigned int)(a1 + 6) ^ a1[6]) + 1536);
      break;
    case -10001:
      v5 = (unsigned int)(a1 + 6);
      v6 = a1[2];
      v7 = (unsigned int)(a1 + 6) ^ a1[6];
      if ( v6 == a1[9] )
        v8 = a1[14];
      else
        v8 = *(_DWORD *)(**(_DWORD **)(v6 + 8) + 12);
      *(_DWORD *)(v7 + 1536) = v8;
      *(_DWORD *)(v7 + 1548) = 7;
      result = (void *)((v5 ^ *(_DWORD *)v5) + 1536);
      break;
    case -10000:
      result = (void *)(((unsigned int)(a1 + 6) ^ a1[6]) + 1552);
      break;
    default:
      v3 = **(_DWORD **)(a1[2] + 8);
      if ( -10002 - a2 > *(unsigned __int8 *)(v3 + 4) )
        result = &unk_28E7530;
      else
        result = (void *)(v3 + 16 * (-10002 - a2 + 1));
      break;
  }
  return result;
}
